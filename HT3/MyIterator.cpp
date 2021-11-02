
#include "MyIterator.h"

template<typename ValueType>
MyIterator<ValueType>::MyIterator(ValueType *p) :
        p(p)
{

}

template<typename ValueType>
MyIterator<ValueType>::MyIterator(const MyIterator& it) :
        p(it.p)
{

}

template<typename ValueType>
bool MyIterator<ValueType>::operator!=(MyIterator const& other) const
{
    return p != other.p;
}

template<typename ValueType>
bool MyIterator<ValueType>::operator==(MyIterator const& other) const
{
    return p == other.p;
}

template<typename ValueType>
typename MyIterator<ValueType>::reference MyIterator<ValueType>::operator*() const
{
    return *p;
}

template<typename ValueType>
MyIterator<ValueType> &MyIterator<ValueType>::operator++()
{
    ++p;
    return *this;
}

void test3(){
    std::cout << "TASK3\n";
    int m[5] = { 1,2,3,4,5 };
    MyIterator <int> it = std::begin(m);
    for (auto &m : m)
    {
        std :: cout << *it << " ";
        ++it;
    }
    std::cout << "\n---------------------------\n\n";
}