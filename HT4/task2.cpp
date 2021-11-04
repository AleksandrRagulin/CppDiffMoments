#include "task2.h"

void task2(){
    srand(time(NULL));

    int Sz = 100;
    float error = 0.0;

    std::vector <float> Vec_float;
    std::vector <int> Vec_int;

    std::cout <<"\nTASK2\n";

    Vec_float.reserve(Sz);
    Vec_int.reserve(Sz);

    for(int i = 0; i < Sz; ++i) Vec_float.emplace_back(rand() % 100 + (float)(rand() % 100)/100);
    for(int i = 0; i < Sz; ++i) Vec_int.emplace_back((int)Vec_float[i]);

    std::cout << "Float vector:\n";
    print_vector(Vec_float);


    std::cout << "\nFloat int:\n";
    print_vector(Vec_int);

    for(int i = 0;i < Sz; ++i) error += pow(Vec_float[i] - Vec_int[i],2);

    std::cout << "Error = " << error << std::endl;

    std::cout << "-----------------------\n";
}

template<typename T>
void print_vector(const std::vector <T> &vec){
    for(auto it = vec.begin(); it != vec.end();++it) std::cout << *it << " ";

    std::cout << std::endl;
}