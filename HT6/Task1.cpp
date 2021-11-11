#include "Task1.h"

void task1(){

    pcout() << "TASK1\n";

    thread t1(fun_print,"This thread name is t1");
    thread t2(fun_print,"This thread name is t2");
    thread t3(fun_print,"This thread name is t3");
    thread t4(fun_print,"This thread name is t4");

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    pcout() << "\n-----------------------------------------\n";
}


template<typename T>
pcout &pcout::operator<<(const T &_t) {
    cout << _t;
    return *this;
}

void fun_print(string str){
    this_thread::sleep_for(1s);
    pcout() << str << endl;
}

pcout &pcout::operator<<(ostream& (*text)(ostream&))
{
    cout << text;
    return *this;
}