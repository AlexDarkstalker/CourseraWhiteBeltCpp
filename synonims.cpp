//
// Created by aiger on 29.04.2020.
//
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <chrono>
using namespace std;
using namespace std::chrono;

 int main19() {
     int num, count;
     bool are_synonims;
     set<set<string>> synonims;
     set<string> synonim;
     map<string, set<set<string>>> num_synonims;
     string operation, word1, word2;
     cin >> num;
     for(int i = 0; i < num; i++) {
         cin >> operation;
         if(operation == "ADD") {
             cin >> word1 >> word2;
//             auto start = steady_clock::now();
             synonim.insert(word1);
             synonim.insert(word2);
             num_synonims[word1].insert(synonim);
             num_synonims[word2].insert(synonim);
             synonims.insert(synonim);
             synonim.clear();
//             auto finish = steady_clock::now();
//             cout << "Execute Add " << duration_cast<microseconds>(finish - start).count() << " ms" << endl;
         } else if(operation == "COUNT") {
             cin >> word1;
//             auto start = steady_clock::now();
             cout << num_synonims[word1].size() << endl;
//             auto finish = steady_clock::now();
//             cout << "Execute Count " << duration_cast<microseconds>(finish - start).count() << " ms" << endl;

         } else if (operation == "CHECK") {
             cin >> word1 >> word2;
//             auto start = steady_clock::now();
             synonim.insert(word1);
             synonim.insert(word2);
             are_synonims = false;
             if (synonims.find(synonim) != synonims.end())
//             for(const auto& elem: synonims) {
//                 if(elem == synonim) {
                     cout << "YES" << endl;
//                     are_synonims = true;
//                 }
//             }
//             if(!are_synonims)
             else
                 cout << "NO" << endl;
             synonim.clear();
//             auto finish = steady_clock::now();
//             cout << "Execute Count " << duration_cast<microseconds>(finish - start).count() << " ms" << endl;
         }
     }
     return 0;
 }
