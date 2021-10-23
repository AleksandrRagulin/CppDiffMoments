#include "PhoneNumber.h"

ostream& operator<<(ostream &os, const PhoneNumber& phonenumber){
    os << "+" << phonenumber.CountryCode << "(" << phonenumber.CityCode << ")"
    << phonenumber.Number;
    if(phonenumber.AddNumber) os << " " << *phonenumber.AddNumber;
    else os << "  -";
}