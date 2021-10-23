#include "PhoneNumber.h"
#include "Person.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <tuple>
using namespace std;
class PhoneBook{
private:
    vector<pair<Person, PhoneNumber>> phonebook;
public:
    PhoneBook(ifstream &A){
        while(true) {
            string s;
            if(!A.eof())
            {
                Person person;
                PhoneNumber pnumber;
                A >> person.Surname >> person.Name;
                A >> s;
                if(s!="-") person.Patronymic = s;
                A >> s;
                pnumber.CountryCode = stoi(s);
                A >> s;
                pnumber.CityCode = stoi(s);
                A >> s;
                pnumber.Number = stoi(s);
                A >> s;
                if(s!="-") pnumber.AddNumber = stoi(s);
                phonebook.emplace_back(person,pnumber);
            }
            else break;
       }

    }
    void SortByName();
    void SortByPhone();
    bool Contains(Person X);
    tuple <string,PhoneNumber> GetPhoneNumber(const string&  sur);
    void ChangePhoneNumber(Person pers,PhoneNumber pNumber);
    friend ostream& operator<<(ostream &os, const PhoneBook& pBook);
};

