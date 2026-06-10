/*
3. Word Count
Write a function that, given a string, returns the number of words it
contains. Words are separated by spaces. You can assume there are no
leading, trailing, or consecutive spaces.
Example:
Input: "the quick brown fox"
Output: 4
*/
#include <iostream>
#include <vector>
#include <string>

int nofwords(const std::string &str){
    int count{1};
    if(str.empty()) return 0;

    for (const char x : str){
        if (x == ' '){
            count++;
        }

    }

    return (count);
}

int main(){
    std::string text{"I ate an apple"};

    std::cout << nofwords(text) << "\n";


    return 0;
}