//
// Created by aiger on 27.04.2020.
//
#include <iostream>
#include <vector>
using namespace std;

int main10() {
    int n, sum = 0, middle;
    cin >> n;
    vector<int> nums (n);
    vector<int> higher;
    for(auto& num: nums) {
        cin >> num;
        sum += num;
    }
    middle = sum / n;
    int i = 0;
    for(auto num: nums) {
        if ( num > middle)
            higher.push_back(i);
        ++i;
    }
    cout << higher.size() << endl;
    for(auto num: higher)
        cout << num << " ";
    return 0;
}
