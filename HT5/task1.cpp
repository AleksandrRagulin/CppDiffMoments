#include "task1.h"

void task1(){
    std::cout << "TASK1\n";

    std::vector <std::string> InitData = {"Hello", "World", "Hello", "Box", "Lamp", "6"};

    std::cout << "Initial data\n";
    for(auto & it : InitData) std::cout << it << " ";
    std::cout << std::endl;

    std::cout << "Unique values\n";
    findUniq<std::string>(InitData.begin(), InitData.end());
    std::cout << "\n---------------------\n\n";

}


template<typename T>
void findUniq(typename std::vector<T>::const_iterator beg, typename std::vector<T>::const_iterator end){
    std::set<T> mySet;

    for(auto it = beg; it!=end; ++it) mySet.insert(*it);

    for(auto it = mySet.begin(); it != mySet.end(); ++it) std::cout << *it << " ";

    std::cout << std::endl;
}