/*

4. Palindrome Check
Write a function that, given a string, returns true if the string is a
palindrome and false otherwise. The check must be case-insensitive, so
"Racecar" and "racecar" are both palindromes.
A palindrome is a word that reads the same forwards and backwards.
Examples:
"racecar" -> true
"Racecar" -> true
"hello" -> false

*/

#include <string>
#include <iostream>
using namespace std;

  bool palind(const string &st){

  auto it = st.begin();
  auto itr = st.rbegin();

    while (it != st.end() && itr != st.rend()){
      if (*itr != *it ) return false;

      ++it;
      ++itr;

    }

    return true;
  }








int main(){
  string new1{"racecar"};

  string new2{"elma"};

  cout << palind(new1) << "\n";

 cout << palind(new2) << "\n";
  return 0;
}









/*
#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string &str){

string forward, backward;
  
  for (auto rit = str.rbegin(); rit != str.rend(); ++rit){
    cout << *rit;

    backward = backward + *rit;
 
  }
for (auto it = str.begin(); it != str.end(); ++it){
    cout << *it;

    forward = forward + *it;

}

if (forward == backward) return 1;

    return 0;
  }



int main(){

    string dogru{"racecar"};
    string yanlis{"notaracecar"};

    cout << is_palindrome(dogru) << "\n";
    cout << is_palindrome(yanlis) << "\n";


    return 0;
}
    */