#ifndef HT6_TASK2_H
#define HT6_TASK2_H

#include <iostream>
#include <thread>
#include <list>

using namespace std;

void task2(int iNum);

bool bIsSimple(int iNum, list <int> & vec);

void printProgress(const int& tmp_Quant, const int& req_Quant);
void countSimples(const int& Num, int& tmp_num, int& nSimple);

#endif //HT6_TASK2_H
