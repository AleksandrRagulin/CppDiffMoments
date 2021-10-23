#include "PhoneBook.h"
#include <cstdlib>
#include <algorithm>

ostream& operator<<(ostream &os, const PhoneBook& pBook){
    for(const auto& [person, number]: pBook.phonebook){
        os << person << " " << number << endl;
    }
}

auto comparename = [](pair<Person, PhoneNumber>& lhs, pair<Person, PhoneNumber>& rhs){
    return lhs.first < rhs.first;
};

auto comparenumber = [](pair<Person, PhoneNumber>& lhs, pair<Person, PhoneNumber>& rhs){
    return tie(lhs.second.CountryCode,lhs.second.CityCode,lhs.second.Number,lhs.second.AddNumber) <
            tie(rhs.second.CountryCode,rhs.second.CityCode,rhs.second.Number,rhs.second.AddNumber);
};

void PhoneBook::SortByPhone() {
    sort(phonebook.begin(), phonebook.end(),comparenumber);
}

void PhoneBook::SortByName(){
    sort(phonebook.begin(), phonebook.end(), comparename);
}

tuple <string,PhoneNumber> PhoneBook::GetPhoneNumber(const string&  sur){
    int count = 0;
    PhoneNumber num;
    for_each(phonebook.begin(), phonebook.end(), [&](const auto& pers) {
        if(pers.first.Surname == sur)  {
            count ++;
            if (count == 1) num = pers.second;
        }
    });
    if (count == 0) return make_tuple ("not found", num);
    if(count == 1) return make_tuple("",num);
    if(count == 2) return make_tuple("found more than 1",num);
}

void PhoneBook::ChangePhoneNumber(Person pers,PhoneNumber pNumber) {
    //не знаю как с find_if
}

