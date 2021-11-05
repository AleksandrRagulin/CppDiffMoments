#include "task2.h"

void task2(){
    std::cout << "TASK2\n";

    std::string a;
    std::string temp;
    std::string temp_1;
    std::string delimiter = ".";
    std::vector <std::string> text;
    
    while (std::cin.peek() != '\n') {
        std::cin >> temp;
        a.append(" ");
        a.append(temp);
    }

    temp = a;
    temp_1 = a;

    size_t pos = 0;
    std::string search[] = {"?","!"};

    while ((pos = temp_1.find(search[0], pos)) != std::string::npos) {
        temp_1.replace(pos, search[0].length(), delimiter);
        pos += delimiter.length();
    }

    pos = 0;
    while ((pos = temp_1.find(search[1], pos)) != std::string::npos) {
        temp_1.replace(pos, search[1].length(), delimiter);
        pos += delimiter.length();
    }

    while ((pos = temp_1.find(delimiter)) != std::string::npos) {
        text.emplace_back(temp.substr(0, pos + delimiter.length()));
        temp.erase(0, pos + delimiter.length());
        temp_1.erase(0, pos + delimiter.length());
    }

    std::cout << "Initial data:\n";
    for(auto & it : text) std::cout << it << "\n";

    sort(text.begin(),text.end(),compare);

    std::cout << "Result data:\n";
    for(auto & it : text) std::cout << it << "\n";


    std::cout << "\n---------------------\n\n";
}

bool compare(std::string a, std::string b){
    return a.length()<b.length();
}

