//
// Created by aiger on 29.04.2020.
//
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main18() {
    int num;
    set<string> strings;
    string input;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> input;
        strings.insert(input);
    }
    cout << strings.size();
    return 0;
}
