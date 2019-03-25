#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class matrix
{

class Matrix
{
   friend std::ostream &operator<<(std::ostream &,const Matrix&);
   friend std::ostream &operator>>(std::istream &,Matrix &);

   friend  &operator+(const Matrix&,const Matrix &);
   friend  &operator-(const Matrix &,const Matrix &);
   friend  &operator*(const Matrix &,const Mareix &);
   friend  &operator/(const Matrix &,const Mareix &);

    private:
        int a;
        int b;
        int c;
        int d;
        int e;
        int f;
        int g;
        int h;
        int i;

};

#endif // MATRIX_H
