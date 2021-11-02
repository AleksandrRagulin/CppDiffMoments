#include "Matrix.h"

Matrix::Matrix(int Sz, ...) {
    Mat = new int * [Sz];
    for (int i = 0; i < Sz; i++) {          // двумерный
        Mat[i] = new int [i]; // массив
    }
    int Num = Sz*Sz;
    sizeMat = Sz;
    int i=0;
    for(int *ptr = &Sz; i<Num; ++i) Mat[i/Sz][i%Sz] = *(++++ptr);
}

void Matrix::print() {
    for(int i=0; i<sizeMat;++i)
    {
        for(int j=0; j<sizeMat;++j) std::cout << Mat[i][j]<< " ";
        std::cout << std::endl;
    }
}

double Matrix::determinant() {
    if(sizeMat == 1) return Mat[0][0];
    if(sizeMat == 2) return Mat[0][0]*Mat[1][1] - Mat[0][1]*Mat[1][0];
    if(sizeMat == 3) {
        Matrix Mat1(2,Mat[1,1],Mat[1,2],Mat[2,1],Mat[2,2]);
        Matrix Mat2(2,Mat[0,1],Mat[0,2],Mat[2,1],Mat[2,2]);
        Matrix Mat3(2,Mat[0,1],Mat[0,2],Mat[1,1],Mat[1,2]);
        return Mat[0][0]*Mat1.determinant() - Mat[0][1]*Mat1.determinant() + Mat[0][2]*Mat1.determinant();
    }
}

void test2() {
    Matrix X(3,1,2,3,4,5,6,7,8,9);
    std::cout << "TASK2\nInitial matrix\n";
    X.print();
    std::cout << "Determinant = " << X.determinant();
    std::cout << "\n---------------------------\n\n";
}
