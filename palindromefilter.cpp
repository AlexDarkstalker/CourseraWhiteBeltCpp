//
// Created by aiger on 27.04.2020.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string str) {
    for ( int i = 0 ; i < str.length()/2; i++) {
        if(str[i] != str[str.length()- i - 1])
            return false;
    }
    return true;

}

vector<string> PalindromFilter (vector<string> words, int minLength ) {
    vector<string> retWords;
    for(auto word: words) {
        if(IsPalindrom(word) && word.length() >= minLength)
            retWords.push_back(word);
    }
    return retWords;
}

int main3() {
    vector<string> words = {"weew", "bro", "code"};
    vector<string> ret;
    ret.clear();
    int n = 4;
    ret = PalindromFilter(words, n);
    for( auto word: ret)
        cout << word << " ";
    return 0;
}