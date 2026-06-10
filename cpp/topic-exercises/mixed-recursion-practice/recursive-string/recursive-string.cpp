/*
Problem 5 — Generate Strings Recursively

Write a recursive function:

    void generate_strings(const std::vector<char>& letters, std::string prefix, int k);

The function must print all strings of length k
that can be formed using the characters in letters.

Rules:
- repetition is allowed
- solve it recursively
- when k == 0, print prefix
- do not use extra loops except the one used to try each letter

Example:
letters = {'a', 'b', 'c'}
k = 2

Possible output:
aa
ab
ac
ba
bb
bc
ca
cb
cc
*/

#include <vector>
#include <string>
#include <iostream>

void generate_strings(const std::vector<char>& letters, std::string prefix, int k){
    if (k == 0){
        std::cout << prefix << std::endl;
        return;
    }

    for (char x : letters){
        generate_strings(letters, prefix + x, k - 1);
    }    
}

int main(){
    std::vector <char> let {'a', 'b', 'c'};
    int len{2}
    ;
    generate_strings(let, "", len);
    return 0;
}