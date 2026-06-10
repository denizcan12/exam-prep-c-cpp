#include <string>
#include <iostream>

void collapse_runs(std::string& s) {
    if (s.empty()) return;

    int j = 0;

    for (int i = 1; i < s.size(); i++) {
        if (s.at(i) != s.at(j)) {
            j = j + 1;
            s.at(j) = s.at(i);
        }
    }

    s.resize(j + 1);
}

int main() {
    std::string s{"aaabbc"};
    collapse_runs(s);
    std::cout << s << std::endl;
    return 0;
}
