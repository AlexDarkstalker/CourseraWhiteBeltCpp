//
// Created by aiger on 27.04.2020.
//
#include <iostream>
using namespace std;

void UpdateIfGreater (const int& a, int& b ) {
    if( a > b)
        b = a;
}

int main6(){
    int x, y;
    cin >> x >> y;
    UpdateIfGreater(x, y);
    cout << y;
    return 0;
}
