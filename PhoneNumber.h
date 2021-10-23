#include <optional>
#include <iostream>
using namespace std;
struct PhoneNumber{
    int CountryCode;
    int CityCode;
    int Number;
    optional <int> AddNumber;
};

ostream& operator<<(ostream &os, const PhoneNumber& phonenumber);