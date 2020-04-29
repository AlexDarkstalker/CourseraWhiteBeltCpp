//
// Created by aiger on 27.04.2020.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v) {
    vector<int> reversed;
    for(const auto& num: v)
        reversed.emplace(reversed.begin(), num);
    return reversed;
}

int main9() {
    vector<int> nums = {1, 5, 3, 4, 2};
    vector<int> reverse = Reversed(nums);
    vector<int> n (0);

    for(const auto& num: n)
        cout << num << " ";
    n.assign(0, 343);
    for(const auto& num: n)
        cout << num << " ";
    return 0;
}