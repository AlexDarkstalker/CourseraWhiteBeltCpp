//
// Created by aiger on 27.04.2020.
//

#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& numbers) {
    vector<int> reverse;
    for( const auto& num: numbers)
        reverse.emplace(reverse.begin(), num);
    numbers = reverse;
}

int main8() {
    vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
    for(const auto& num: numbers)
        cout << num << " ";
    return 0;
}