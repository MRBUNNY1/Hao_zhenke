#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class matrix
{
    friend std::ostream &operator<<(std::ostream &,const Matrix &);
    friend std::istream &operator>>(std::isteram &,Matrix &);
    Matrix &operator +(const Matrix &);
    Matrix &operator -(const Matrix &);
    Matrix &operator =(const Matrix &);

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
