#include <iostream>
#include <vector>
#include <string>

int most_frequent(const std::vector<int>& v) {
    if (v.empty()) {
        return 0;
    }

    int best_value = v.at(0);
    int best_count = 0;

    for (int i = 0; i < v.size(); i++) {
        int count = 0;

        for (int j = 0; j < v.size(); j++) {
            if (v.at(i) == v.at(j)) {
                count++;
            }
        }

        if (count > best_count || (count == best_count && v.at(i) < best_value)) {
            best_count = count;
            best_value = v.at(i);
        }
    }

    return best_value;
}

int main() {
    std::vector<int> hector{1, 2, 2, 3, 3, 3, 4, 5, 6, 7};
    std::cout << most_frequent(hector) << std::endl;
    return 0;
}