/*
1. Count Vowels
Write a function that, given a string, returns the number of vowels
(a, e, i, o, u — both lowercase and uppercase) it contains.
Example:
Input: "Hello World"
Output: 3 (e, o, o)
*/

#include <iostream>
#include <string>
#include <vector>

int strvowel(const std::string &st){
    int count{0};
for (const char ch : st){
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch =='u' ||
        ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U'){
            
        count++;
    }
   
}
 return count;
}

int main(){
    std::string block{"Deneme"};

    std::cout << strvowel(block);
    return 0;
}