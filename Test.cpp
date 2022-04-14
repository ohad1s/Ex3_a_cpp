/**
 * AUTHOR: Ohad Shirazi
 * Date: 14-4-2022
 */
#include "doctest.h"
#include "Matrix.hpp"
#include <string>
#include <stdexcept>
#include <iostream>

using namespace std;
using namespace zich;

TEST_CASE ("col/row neg or zero") {
    int r = -1;
    int c = 1;
    vector<double> vec;
    CHECK_THROWS(Matrix
    m(vec, r, c));
    r = 1;
    c = 0;
    vector<double> vec2;
    CHECK_THROWS(Matrix
    m2(vec2, r, c));
    r = 0;
    c = 0;
    vector<double> vec3;
    CHECK_THROWS(Matrix
    m3(vec3, r, c));
}

TEST_CASE ("Arithmetic operations on matrices of different sizes") {
    vector<double> vec;
    Matrix m1(vec, 2, 3);
    vector<double> vec2;
    Matrix m2(vec, 3, 2);
    CHECK_THROWS(m1+m2);
    Matrix m3(vec, 4, 5);
    Matrix m4(vec, 5, 4);
    CHECK_THROWS(m4-m3);
    Matrix m5(vec, 2, 3);
    Matrix m6(vec, 3, 2);
    CHECK_THROWS(m5+=m6);
    Matrix m7(vec, 4, 5);
    Matrix m8(vec, 5, 4);
    CHECK_THROWS(m7-=m8);
    Matrix m9(vec, 4, 5);
    Matrix m10(vec, 5, 4);
    CHECK_THROWS(bool a=m10==m9);
    Matrix m11(vec, 4, 5);
    Matrix m12(vec, 5, 4);
    CHECK_THROWS(bool b=m11!=m12);
    Matrix m13(vec, 4, 5);
    Matrix m14(vec, 5, 4);
    CHECK_THROWS(bool c=m13<m14);
    Matrix m15(vec, 4, 5);
    Matrix m16(vec, 5, 4);
    CHECK_THROWS(bool e=m15<m16);
    Matrix m17(vec, 4, 5);
    Matrix m18(vec, 5, 4);
    CHECK_THROWS(bool t=m17<=m18);
}

TEST_CASE ("bad mul") {
    vector<double> vec;
    Matrix ma1(vec, 7, 5);
    vector<double> vec2;
    Matrix ma2(vec, 6, 8);
    CHECK_THROWS(ma1*ma2);
    Matrix ma3(vec, 8, 5);
    Matrix ma4(vec, 6, 8);
    CHECK_THROWS(ma4*ma3);
    Matrix ma5(vec, 7, 5);
    Matrix ma6(vec, 6, 8);
    CHECK_THROWS(ma5*=ma6);
}

TEST_CASE ("good input") {
    vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    vector<double> identity3 = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    vector<double> identity2 = {2, 0, 0, 0, 2, 0, 0, 0, 2};
    Matrix matrix1(identity,3,3);
    Matrix matrix3(identity3,3,3);
    Matrix matrix2(identity2,3,3);
    CHECK(matrix1+matrix1+matrix1==matrix3);
    CHECK(matrix1*3==matrix3);
    CHECK(matrix3-matrix1==matrix2);
    CHECK((matrix2+matrix1==matrix3)==true);
    CHECK((matrix1>matrix3)==false);
}