//
// Created by aiger on 28.04.2020.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

bool Contains(map<string, string> map, string key ) {
    for(const auto& str: map) {
        if ( str.first == key)
            return true;
    }

    return false;
}

void ChangeKey(map<string, string>& map, string key, string new_key) {
    string capital;
    if (Contains(map, key)) {
        capital = map[key];
        map.erase(key);
        map[new_key] = capital;
        cout << "Country " << key << " with capital " << capital << " has been renamed to " << new_key << endl;
    } else {
        cout << "Incorrect rename, skip" << endl;
    }
}

int main15() {
    map<string, string> countries;
    int num, old_size, new_size;
    bool changed;
    string operation, country, new_country, capital, old_capital;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> operation;
        if (operation == "CHANGE_CAPITAL") {
            cin >> country >> capital;
            old_size = countries.size();
            old_capital = countries[country];
            countries[country] = capital;
            if (old_size == countries.size()) {
                if (old_capital == capital)
                    cout << "Country " << country << " hasn't changed its capital" << endl;
                else
                    cout << "Country " << country << " has changed its capital from " << old_capital <<  " to " << capital << endl;
            } else
                cout << "Introduce new country " << country << " with capital " << capital << endl;
        } else if (operation == "RENAME") {
            cin >> country >> new_country;
            if ( country == new_country) {
                cout << "Incorrect rename, skip" << endl;
            } else if (!Contains(countries, new_country)) {
                ChangeKey(countries, country, new_country);
            } else {
                cout << "Incorrect rename, skip" << endl;
            }

        } else if (operation == "ABOUT") {
            cin >> country;
            if (Contains(countries, country)) {
                cout << "Country " << country << " has capital " << countries[country] << endl;
            } else {
                cout << "Country " << country << " doesn't exist" << endl;
            }

        } else if (operation == "DUMP") {
            if (!countries.empty()) {
                for(const auto& cntr: countries)
                    cout << cntr.first << "/" << cntr.second << " ";
                cout << endl;
            } else
                cout << "There are no countries in the world" << endl;
        }
    }
    return 0;
}