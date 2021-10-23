#include <string>
#include <optional>
#include <iostream>
#include <tuple>
using namespace std;
struct Person{
    string Name;
    string Surname;
    optional <string> Patronymic;
};

ostream& operator<<(ostream &os, const Person& person);
bool operator<(const Person& p1, const Person& p2);
bool operator==(const Person& p1, const Person& p2);