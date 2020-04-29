//
// Created by aiger on 29.04.2020.
//

#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

set<string> BuildMapValuesSet (map<int, string> map) {
    set<string> values;
    for(const auto& elem: map) {
        values.insert(elem.second);
    }
    return values;

}
//
//int main() {
//    map<int, string> map = {{1, "odd"},
//                            {2, "even"},
//                            {3, "odd"},
//                            {4, "even"},
//                            {5, "odd"}};
//    set<string> values = BuildMapValuesSet(map);
//    for (const string& value : values)
//        cout << value << endl;
//    return 0;
//}