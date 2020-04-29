//
// Created by aiger on 29.04.2020.
//
#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

int main() {
    map<set<string>, int> bus_route;
    set<string> route;
    string stop;
    int num, route_len, count = 1;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> route_len;
        for(int j = 0; j < route_len; j++) {
            cin >> stop;
            route.insert(stop);
        }
        if(bus_route.count(route)) {
            cout << "Already exists for " << bus_route[route] << endl;
        } else {
            bus_route[route] = count++;
            cout << "New bus " << bus_route[route] << endl;
        }
        route.clear();
    }
    return 0;
}