///2.a*ba*
#include <iostream>
#include <string>                                   ///MOHAMMAD NAIMUL HAQUE 21-44387-1 SEC-D

int main()
{
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    bool match = true;
    bool oneB = false;
    int i, b;
    int count = 0;

    i = 0;
    while (i < str.length()) {
        if (str[i] == 'b') {
            count++;
            b = i;
        }
        i++;
    }

    i = 0;
    while (i < str.length()) {
        if (count != 1) {
            break;
        }

        if (str[i] != 'a' && i != b) {
            match = false;
        }
        i++;
    }

    if (count == 1 && match) {
        std::cout << "Match found!" << std::endl;
    } else {
        std::cout << "No match found!" << std::endl;
    }

    return 0;
}

