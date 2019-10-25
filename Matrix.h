#ifndef MATRIX_H
#define MATRIX_H
#include "Matrix.h"
#include<iostream>
using namespace std;

class Matrix
{
   public:
         Matrix(int row , int col);
         Matrix(){}
         Matrix(const Matrix& m);
         ~Matrix();
         //operators
          friend  istream& operator>>  (istream& in, Matrix& mat);
          friend  ostream& operator<<(ostream& out, const Matrix& m);
          Matrix& operator=( Matrix m);
          Matrix& operator+( Matrix m);
          Matrix& operator-( Matrix m);
          Matrix operator*( Matrix& m);
          // function transpose
           Matrix& transpose();


    protected:

    private:
        int row,col;
        int**data;
};

#endif // MATRIX_H
