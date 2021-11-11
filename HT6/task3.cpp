#include "task3.h"


void task3(){
    cout << "\nTASK3\n";
    //list <char> house = {'a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a'};

    list <char> house = {'a','a'};

    bool end = false;

    cout << "\nInitial quantity is " << house.size() << endl;

    Timer timer("time_of_game");


    thread t1(owner,ref(house),ref(end));
    thread t2(thief,ref(house),ref(end));

    t1.join();
    t2.join();

    cout << endl;
    timer.print();

    cout << "\nThief win\n";
    cout << "\n-----------------------\n";
}

void owner(list <char>& house, bool& res){
    while (!res){

        if(house.empty()) res = true;
        else {
            house.push_back('a');
            cout << "+";
        }
        this_thread::sleep_for(1500ms);
    }
}

void thief(list <char>& house, bool& res){
    while (!res){

        house.pop_back();
        cout << "-";
        this_thread::sleep_for(1s);
    }
}
