#include "task1.h"

void task1(){
    std::vector <float> V = {1.2, 2.03, 3.11, 5, 6.80, 8.26};
    float x = 8.25;

    std::cout << "TASK1\nInitial vector: \n";

    print_vector(V);

    insert_sorted(V,x);

    std::cout << "\nInsert value: " << x <<std::endl << std::endl;
    std::cout << "Result vector: \n";

    print_vector(V);

    std::cout << "-----------------------\n";
}

template<typename T>
void insert_sorted(std::vector <T> &vec, T x){
    for(auto it = vec.begin(); it !=vec.end(); ++it) {
        if(x <= *it) {
            vec.emplace(it,x);
            return ;
        }
    }
}

template<typename T>
void print_vector(const std::vector <T> &vec){
    for(auto it = vec.begin(); it != vec.end();++it) std::cout << *it << " ";

    std::cout << std::endl;
}