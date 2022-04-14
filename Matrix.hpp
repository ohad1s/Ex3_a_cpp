#ifndef CPP_EX3_A_MATRIX_H
#define CPP_EX3_A_MATRIX_H
#endif //CPP_EX3_A_MATRIX_H

#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

using namespace std;
namespace zich {
    class Matrix {
    private:
        int row;
        int col;
        vector<double> my_matrix;

    public:

        Matrix(const vector<double> &matrix, const int row, const int col);

        ~Matrix();

        Matrix operator+(Matrix const &mat);

        Matrix &operator++();

        Matrix operator++(const int num);

        Matrix &operator+=(const Matrix &mat);

        Matrix operator-(const Matrix &mat);

        Matrix &operator--();

        Matrix operator--(const int num);

        Matrix &operator-=(const Matrix &mat);

        Matrix operator*(const Matrix &mat);

        Matrix &operator*=(const Matrix &mat);

        Matrix operator*(const double scalar);

        Matrix &operator*=(const double scalar);

        bool operator>(Matrix &mat);

        bool operator>=(Matrix &mat);

        bool operator<(Matrix &mat);

        bool operator<=(Matrix &mat);

        friend bool operator==(const Matrix& m1, const Matrix& m2);
        friend bool operator!=(const Matrix& m1, const Matrix& m2);

//        double multiplication(const Matrix &mat, const int tempRow, const int tempCol);
//        double sumMatrix();
        friend std::ostream &operator<<(std::ostream &output, const Matrix &m);

        friend std::istream &operator>>(std::istream &input, Matrix &m);

        friend Matrix operator-(Matrix &mat);

        friend Matrix operator+(Matrix &mat);

        friend Matrix operator*(const double scalar, Matrix &mat);

//        friend bool operator==(Matrix const &mat1,Matrix const &mat2);
    };

}
