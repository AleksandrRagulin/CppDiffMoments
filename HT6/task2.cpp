#include "task2.h"

void task2(int Num){
    cout << "\nTASK2\n";

    int  tmp_num= 1;
    int nSimple = 1;

    thread th1(countSimples, ref(Num), ref(tmp_num), ref(nSimple));
    thread th2(printProgress,ref(nSimple), ref(Num));

    th1.join();
    th2.join();

    cout << "\nNumber of simple number is " << Num << endl;
    cout << "Res = " << tmp_num;
    cout << "\n-----------------------\n";
}


void countSimples(const int& Num, int& tmp_num, int& nSimple){
    list <int> Simples = {2};

    while(nSimple != Num)
    {
        tmp_num +=2;
        if(bIsSimple(tmp_num, Simples))
        {
            nSimple++;
            Simples.push_back(tmp_num);
        }
    }
}


void printProgress(const int& tmp_Quant, const int& req_Quant){
    int currentPercent = 0 ;
    int old_Percent = 0;

    while(tmp_Quant < req_Quant )
    {
        currentPercent = tmp_Quant*100/req_Quant;

        if(currentPercent > old_Percent){
            cout << "Progress: " << currentPercent << "%\n";
            old_Percent = currentPercent;
        }
    }
}




bool bIsSimple(int iNum,  list <int> & vec){

    if(iNum != 5 && iNum % 10 == 5) return false;

    for(auto &it : vec){
        if(iNum % it == 0) return false;
    }
    return true;
}
