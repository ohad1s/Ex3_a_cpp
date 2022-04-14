#include "Matrix.hpp"
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

namespace zich {

    Matrix::Matrix(const vector<double> &matrix, const int row, const int col) {
        this->my_matrix = matrix;
        this->row = row;
        this->col = col;
    }

    Matrix::~Matrix() {}

    Matrix Matrix::operator+(Matrix const &mat) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return m;
    }

    Matrix &Matrix::operator++() {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return *this;
    }

    Matrix Matrix::operator++(const int num) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return m;
    }

    Matrix &Matrix::operator+=(const Matrix &mat) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return *this;
    }

    Matrix Matrix::operator-(const Matrix &mat) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return m;
    }

    Matrix &Matrix::operator--() {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return *this;
    }

    Matrix Matrix::operator--(const int num) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return m;
    }

    Matrix &Matrix::operator-=(const Matrix &mat) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return *this;
    }

    Matrix Matrix::operator*(const Matrix &mat) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return m;
    }

    Matrix &Matrix::operator*=(const Matrix &mat) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return *this;
    }

    Matrix Matrix::operator*(const double scalar) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return m;
    }

    Matrix &Matrix::operator*=(const double scalar) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return *this;
    }

    bool Matrix::operator>(Matrix &mat) { return true; }

    bool Matrix::operator>=(Matrix &mat) { return true; }

    bool Matrix::operator<(Matrix &mat) { return true; }

    bool Matrix::operator<=(Matrix &mat) { return true; }


    std::ostream &operator<<(std::ostream &output, const Matrix &m) {
        return output;
    }

    std::istream &operator>>(std::istream &input, Matrix &m) {
        return input;
    }

    bool operator==(const Matrix& m1, const Matrix& m2) { return true; }

    bool operator!=(const Matrix& m1, const Matrix& m2) { return true; }

    Matrix operator-(Matrix &mat) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return m;
    }

    Matrix operator+(Matrix &mat) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return m;
    }

    Matrix operator*(const double scalar, Matrix &mat) {
        int r = 1;
        int c = 1;
        vector<double> vec;
        Matrix m(vec, r, c);
        return m;
    }


}