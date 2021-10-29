#include "task1.h"
void test1(){
    int a = 1;
    int b= 0;
    std::cout << "TASK1\n";
    std::cout << "a= " << a << " b=" << b << std::endl;
    std::cout << "&a= " << &a << " &b=" << &b << std::endl;
    swap(&a,&b);
    std::cout << "swap\n";
    std::cout << "a= " << a << " b=" << b << std::endl;
    std::cout << "&a= " << &a << " &b=" << &b << std::endl;
    std::cout << "---------------------------\n";
}

template <typename T>
void swap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}
