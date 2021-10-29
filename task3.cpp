#include "task3.h"
#include "timer.h"
void test3() {
    std::cout << "TEST3\n";

    std::cout << "function1 with count_if and find\nResult = " ;
    Timer timer1("time_of_fun1");
    fun1();
    timer1.print();

    std::cout << "\nfunction2 with count_if and for\nResult = " ;
    Timer timer2("time_of_fun2");
    fun2();
    timer2.print();

    std::cout << "\nfunction3 with for and find\nResult = " ;
    Timer timer3("time_of_fun3");
    fun3();
    timer3.print();

    std::cout << "\nfunction4 with double for\nResult = " ;
    Timer timer4("time_of_fun4");
    fun4();
    timer4.print();
}
void fun1(){
    std::ifstream file(R"(C:\GeekBrains\DiffMoments\HT2\WaP.txt)");
    const std::string Letters("aeiou");
    typedef std::istream_iterator<char> in;
    std::cout << std::count_if(in(file), in(), [&Letters](const char c)
    { return Letters.find(tolower(c)) != std::string::npos; }) << std::endl;
    file.close();
}

void fun2(){
    std::ifstream file(R"(C:\GeekBrains\DiffMoments\HT2\WaP.txt)");
    const std::string Letters("aeiou");
    typedef std::istream_iterator<char> in;
    std::cout << std::count_if(in(file), in(), [&Letters](const char c)
    { for(auto &x : Letters){if (x == tolower(c)) return true;} return false; }) << std::endl;
    file.close();
}

void fun3() {
    std::ifstream file(R"(C:\GeekBrains\DiffMoments\HT2\WaP.txt)");
    const std::string Letters("aeiou");
    file.seekg(0, std::ios::end);
    size_t fsize = file.tellg();
    file.seekg(0, std::ios::beg);
    int count =0;
    char c;
    for(int r = 0; r<fsize; r++)
    {
        c= file.get();
        if(Letters.find(tolower(c)) != std::string::npos) count++;
    }
        std::cout << count  << std::endl;
    file.close();
}

void fun4() {
    std::ifstream file(R"(C:\GeekBrains\DiffMoments\HT2\WaP.txt)");
    const std::string Letters("aeiou");
    typedef std::istream_iterator<char> in;
    file.seekg(0, std::ios::end);
    size_t fsize = file.tellg();
    file.seekg(0, std::ios::beg);
    int count =0;
    char c;
    for(int r = 0; r<fsize; r++)
    {
        c= file.get();
        for(auto &x : Letters){
            if (x == tolower(c)) {
                count++;
                break;
            }
        }
    }
    std::cout << count  << std::endl;
    file.close();
}
