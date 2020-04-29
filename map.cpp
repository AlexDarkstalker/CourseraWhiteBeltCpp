//
// Created by aiger on 28.04.2020.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;
int main13() {
    map<string, int> eight = {{"Eight", 8}};
    int i = eight["str"];
    eight.erase("a");
    cout << eight.size();
    return 0;
}
