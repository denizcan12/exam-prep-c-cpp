/*
Exam-level Exercise — Collapse Runs

Write:

    void collapse_runs(std::string& s);

Remove consecutive duplicate characters.

Rules:
- modify s in-place
- do not create another string

Examples:
- "aaabbc" -> "abc"
- "a"      -> "a"
- ""       -> ""
*/
#include <string>
#include <iostream>
using namespace std;

void collapse_runs(string &s){
    if (s.empty()) return;
 int j{}; 

 for (int i = 1; i < s.size(); i++){
    if (s[j] != s[i]) {
        j++;
        s[j] = s[i];
    }

 }
    s.resize(j + 1); 
}

int main(){
    string str {"arraay"};
    collapse_runs(str);

    cout << str << endl;


    return 0;
}