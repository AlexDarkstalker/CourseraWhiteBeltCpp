//
// Created by aiger on 29.04.2020.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

bool RouteContains(map<vector<string>, int>& map, vector<string> key ) {
    for(const auto& str: map) {
        if ( str.first == key)
            return true;
    }
    return false;
}

int main17() {
    map<vector<string>, int> bus_route;
    vector<string> route;
    string stop;
    int num, route_len, count = 1;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> route_len;
        for(int j = 0; j < route_len; j++) {
            cin >> stop;
            route.push_back(stop);
        }
        if(RouteContains(bus_route, route)) {
            cout << "Already exists for " << bus_route[route] << endl;
        } else {
            bus_route[route] = count++;
            cout << "New bus " << bus_route[route] << endl;
        }
        route.resize(0);
    }
    return 0;
}