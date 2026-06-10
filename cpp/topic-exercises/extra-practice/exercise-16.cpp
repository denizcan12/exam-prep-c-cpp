/*
Exercise 16 — Keep Lowercase Letters Only

Write:

    void keep_lowercase(std::string& s);

Remove every character that is NOT a lowercase English letter
between 'a' and 'z'.

Rules:
- modify the original string in-place
- do not create a second string
- use loops and indexing
- use resize at the end

Examples:
- "aB3c$d"  -> "acd"
- "ABC123"  -> ""
- "abcxyz"  -> "abcxyz"
- ""        -> ""
*/

#include <iostream>
#include <string>
using namespace std;

void keep_lower(string &s){
    if (s.empty()) return;

    int j{};

    for(int i{}; i < s.size(); i++){
        if (s.at(i) >= 'a' && s.at(i) <= 'z'){
            s.at(j) = s.at(i);
            j++;
        }
    }
    s.resize(j);
}



int main(){
    string str{""};
    keep_lower(str);
    cout << str << endl;
    return 0;
}