//
// Created by aiger on 28.04.2020.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, int> BuildCharCounters(const string& str) {
    map<char, int> retDict;
    for(auto letter: str)
        retDict[letter]++;
    return retDict;
}
int main14() {
    int num;
    cin >> num;
    string input1, input2;
    for (int i = 0; i < num; i++) {
        cin >> input1 >> input2;
        if (BuildCharCounters(input1) == BuildCharCounters(input2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}