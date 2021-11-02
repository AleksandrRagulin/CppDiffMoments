#ifndef HT3_MYITERATOR_H
#define HT3_MYITERATOR_H
#include <iterator>
#include <iostream>
template<typename ValueType>
class MyIterator: public std::iterator<std::input_iterator_tag, ValueType>
{
private:

public:
    MyIterator(ValueType* p);
    MyIterator(const MyIterator &it);
    bool operator!=(MyIterator const& other) const;
    bool operator==(MyIterator const& other) const;
    typename MyIterator::reference operator*() const;
    MyIterator& operator++();
private:
    int* p;
};

void test3();


#endif //HT3_MYITERATOR_H
