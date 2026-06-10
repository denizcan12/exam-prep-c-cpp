/*
Write:

    void remove_duplicates(std::string& s);

Remove ALL duplicate characters (not just consecutive ones).

Rules:
- keep first occurrence
- remove later ones
- do it IN-PLACE
- use only loops (no set, no extra string)

Example:
"banana" → "ban"
"aaabbb" → "ab"
*/
#include <iostream>
#include <string>
void remove_duplicates(std::string& s) {
    int j = 0;

    for (int i = 0; i < static_cast<int>(s.size()); i++) {
        bool already_seen = false;

        for (int k = 0; k < j; k++) {
            if (s[i] == s[k]) {
                already_seen = true;
                break;
            }
        }

        if (!already_seen) {
            s[j] = s[i];
            j++;
        }
    }

    s.resize(j);
}