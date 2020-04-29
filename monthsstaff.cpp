//
// Created by aiger on 28.04.2020.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main12() {
    vector<vector<vector<string>>> year = {vector<vector<string>>(31), vector<vector<string>>(28), vector<vector<string>>(31),
                                           vector<vector<string>>(30), vector<vector<string>>(31), vector<vector<string>>(30),
                                           vector<vector<string>>(31), vector<vector<string>>(31), vector<vector<string>>(30),
                                           vector<vector<string>>(31), vector<vector<string>>(30), vector<vector<string>>(31)};
    int currentMonth = 0, nextMonth;
    int count, day;
    string operation, staffForList;
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> operation;
        if (operation == "ADD") {
            cin >> day;
            cin >> staffForList;
            year[currentMonth][day - 1].push_back(staffForList);
        } else if (operation == "DUMP") {
            cin >> day;
            cout << year[currentMonth][day - 1].size() << " ";
            for (string staff: year[currentMonth][day - 1])
                cout << staff << " ";
            cout << endl;
        } else if (operation == "NEXT") {
            nextMonth = currentMonth + 1;
            nextMonth %= 12;
            int nextMonthSize = year[nextMonth].size();
            if(year[nextMonth].size() >= year[currentMonth].size()) {
                year[nextMonth].clear();
                year[nextMonth].insert(end(year[nextMonth]), begin(year[currentMonth]), end(year[currentMonth]));
                year[nextMonth].resize(nextMonthSize);
            }
            else {
                for (int i = 0; i < year[nextMonth].size(); i++) {
                    year[nextMonth][i] = year[currentMonth][i];
                    year[currentMonth][i].clear();
                }
                for (int i = year[nextMonth].size(); i < year[currentMonth].size(); i++) {
                    year[nextMonth][year[nextMonth].size() - 1].insert(end(year[nextMonth][year[nextMonth].size() - 1]),
                                                                       begin(year[currentMonth][i]),
                                                                       end(year[currentMonth][i]));
                    year[currentMonth][i].clear();
                }
            }
            currentMonth = nextMonth;
        }
    }
    return 0;
}
