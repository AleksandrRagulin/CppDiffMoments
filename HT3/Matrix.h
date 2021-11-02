#ifndef HT3_MATRIX_H
#define HT3_MATRIX_H

#include <iostream>

class Matrix{
    int **Mat;
    int sizeMat;

public:
    Matrix(int Sz,...);
    void print();
    double determinant();


};

void test2();

#endif //HT3_MATRIX_H
