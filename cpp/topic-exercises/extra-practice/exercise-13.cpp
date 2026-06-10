/*
Exam-level Exercise — Remove Digits (in-place)

Write:

    void remove_digits(std::string& s);

Remove all digit characters ('0'–'9') from the string.

Rules:
- do it IN-PLACE (no new string)
- use a single loop
- use resize at the end

Example:
"ab3c9d1" → "abcd"
"123"     → ""
"a1b2c3"  → "abc"
*/

#include <iostream>
#include <string>
using namespace std;

void remove_digits(string &s){
int j{};

for (int i{}; i < s.size(); i++){
    if (s.at(i) < '0' || s.at(i) > '9'){
        s.at(j) = s.at(i);
        j = j + 1;

    }
}
 s.resize(j);
}

int main(){
    string newstr = "t2es4t5";
    remove_digits(newstr);
    cout << newstr << endl;
    return 0;
}