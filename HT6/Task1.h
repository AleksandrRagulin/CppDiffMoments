#ifndef HT6_TASK1_H
#define HT6_TASK1_H

#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
#include <string>

using namespace std;

void task1();
void fun_print(string str);

static mutex mtx_pcout;

class pcout{
public:

    pcout() {
        mtx_pcout.lock();
    }
    ~pcout(){
        mtx_pcout.unlock();
    }

    template<typename T>
    pcout& operator<<(const T& _t);
    pcout& operator<<(ostream& (*text)(ostream&));
};




#endif //HT6_TASK1_H
