//
// Created by aiger on 27.04.2020.
//

#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom1(string str) {
    for ( int i = 0 ; i < str.length()/2; i++) {
        if(str[i] != str[str.length()- i - 1])
            return false;
    }
    return true;

}

int main2() {
    string str;
    cin >> str;
    cout << IsPalindrom1(str);
    return 0;
}