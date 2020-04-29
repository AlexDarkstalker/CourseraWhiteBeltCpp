//
// Created by aiger on 28.04.2020.
//

//
// Created by aiger on 28.04.2020.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

bool VectContains(vector<string>& vector, string key ) {
    for(const auto& str: vector) {
        if ( str == key)
            return true;
    }
    return false;
}

bool MapContains(map<string, vector<string>>& map, string key ) {
    for(const auto& str: map) {
        if ( str.first == key)
            return true;
    }
    return false;
}

void BusesForStop(map<string, vector<string>>& busstops, vector<string>& buses, string bus_stop ) {
    int count = 0;
    for (const auto& bus: buses) {
        if (VectContains(busstops[bus], bus_stop)) {
            cout << bus << " ";
            count++;
        }
    }
    if(count == 0)
        cout << "No stop";
    cout << endl;
}

void BusesForStopIntermission(map<string, vector<string>>& busstops, vector<string>& buses, string bus_stop, string bus_num) {
    int count = 0;
    for (const auto& bus: buses) {
        if (VectContains(busstops[bus], bus_stop) && bus != bus_num) {
            cout << bus << " ";
            count++;
        }
    }
    if(count == 0)
        cout << "no interchange";
    cout << endl;
}

int main16() {
    map<string, vector<string>> busstops;
    vector<string> buses;
    int num, num_stops;
    string operation, bus, bus_stop;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> operation;
        if (operation == "NEW_BUS") {
            cin >> bus >> num_stops;
            vector<string> stops(num_stops);
            for (auto& stop: stops)
                cin >> stop;
            buses.push_back(bus);
            busstops[bus] = stops;
        } else if (operation == "BUSES_FOR_STOP") {
            cin >> bus_stop;
            BusesForStop(busstops, buses, bus_stop);

        } else if (operation == "STOPS_FOR_BUS") {
            cin >> bus;
            if(MapContains(busstops, bus)) {
                for( const auto& stop: busstops[bus]) {
                    cout << "Stop " << stop << ": ";
                    BusesForStopIntermission(busstops, buses, stop, bus);
                }
            } else
                cout << "No bus" << endl;
        } else if (operation == "ALL_BUSES") {
            if(busstops.empty())
                cout << "No buses" << endl;
            else {
                for (const auto& route: busstops) {
                    cout << "Bus " << route.first << ": ";
                    for (const auto &stop: busstops[route.first])
                        cout << stop << " ";
                    cout << endl;
                }
            }
        }
    }
    return 0;
}