/*
5. Caesar Cipher
Write a function that, given a string and an integer shift, returns a NEW
string where every letter has been shifted forward by that many positions
in the alphabet. Non-letter characters must be left unchanged.
The shift wraps around: shifting 'z' by 1 gives 'a'.
The case of each letter must be preserved.
Examples (shift = 3):
"Hello, World!" -> "Khoor, Zruog!"
"xyz" -> "abc"
*/
#include <iostream>
#include <string>

std::string caesarChiper(int a, const std::string &str){
    std::string result; 
    for(char x : str){
        if(x>='a' && x<= 'z'){
        result += ((x - 'a' + a) % 26) + 'a';
    }

        else if(x>='A' && x<= 'Z'){
          result = result + static_cast<char>(((x - 'A' + a) % 26) + 'A');
        }

        else{
            result += x;
        }
        
    }
return result;

}

int main(){
    std::string willchiper{"ABCD"};

    std::cout << caesarChiper(2, willchiper); 

    return 0;
}