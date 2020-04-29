//
// Created by aiger on 27.04.2020.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main11() {
    vector<string> queue;
    string operation;
    int num, param;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> operation;
        if (operation == "WORRY") {
            cin >> param;
            queue[param] = "Worried";
        } else if (operation == "QUIET") {
            cin >> param;
            queue[param] = "Quiet";
        } else if (operation == "COME") {
            cin >> param;
            queue.resize(queue.size() + param);
        } else if (operation == "WORRY_COUNT") {
            int count = 0;
            for (const auto& person: queue) {
                if(person == "Worried")
                    ++count;
            }
            cout << count << endl;
        }
    }
    return 0;
}