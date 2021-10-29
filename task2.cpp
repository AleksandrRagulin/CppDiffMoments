#include "task2.h"
template<typename T>
void SortPointers(std::vector <T*> *data){
    sort(data->begin(), data->end(),comp<T>);
}
template<typename T>
bool comp(T *x, T *y){
    return *x < *y;
}
void test2() {
    std::vector<int *> data;
    srand(time(nullptr));
    for (int i = 0; i < 10; ++i) {
        int *x = new int;
        *x = rand() % 9;
        data.emplace_back(x);
    }
    std::cout << "TASK2\n";
    std::cout << "Initial vector\n";
    for (auto &it : data) std::cout << *it << " ";
    std::cout << "\nResult vector\n";
    SortPointers(&data);
    for (auto &it : data) std::cout << *it << " ";
    std::cout << "\n----------------------------------\n";
}