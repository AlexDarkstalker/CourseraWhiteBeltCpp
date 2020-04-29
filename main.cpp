#include <iostream>
using namespace std;
int Factorial(int n) {
    if ( n > 0)
        return n* Factorial(n - 1);
    else
        return 1;
}

int main1() {
    int n;
    cin >> n;
    cout << Factorial(n);
    return 0;
}