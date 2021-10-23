#include "Person.h"

ostream& operator<<(ostream &os, const Person& person) {
    os << person.Surname << " " << person.Name;
    if(person.Patronymic) os << " " <<  *person.Patronymic;
    else os << " -";
    return os;
}

bool operator<(const Person& p1, const Person& p2)
{
    return tie(p1.Surname, p1.Name, p1.Patronymic) <
           tie(p2.Surname, p2.Name, p2.Patronymic);
}

bool operator==(const Person& p1, const Person& p2)
{
    return tie(p1.Surname, p1.Name, p1.Patronymic) ==
           tie(p2.Surname, p2.Name, p2.Patronymic);
}
