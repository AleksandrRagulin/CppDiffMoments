#include "task1.h"

void test1(){
    std::list <float> Nums = {1.1, 2.5, 3.44, 1, 25,666};
    std::cout << "TASK1\nInitial vector\n";
    printList(&Nums);
    addMean(&Nums);
    std::cout << "\nResult vector\n";
    printList(&Nums);
    std::cout <<  "\n-------------\n\n";
}

void addMean(std::list <float> *X){
    float avg  = 0;
    std::list<float>::iterator it;
    for(it = X->begin(); it != X->end(); it++) avg += *it;
    avg /= X->size();
    X->push_back(avg);
}

void printList(std::list <float> *X){
    for (auto &it : *X) std::cout << it << " ";
}