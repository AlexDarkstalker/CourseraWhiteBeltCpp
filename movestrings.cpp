//
// Created by aiger on 27.04.2020.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for(const auto& str: source) {
        destination.push_back(str);
    }
    source.clear();
}

int main7() {
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveStrings(source, destination);
    for(const auto& str: destination) {
        cout << str << " ";
    }
    return 0;
}
