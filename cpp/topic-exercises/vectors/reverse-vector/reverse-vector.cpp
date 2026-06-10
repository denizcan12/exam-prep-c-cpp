#include <iostream>
#include <vector>

void reverse(std::vector<int> &c) {
    int *ptr1 = &c[0];
    int *ptr2 = &c[(c.size() - 1)];

    int temp; 
    
    while(ptr1 < ptr2){
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    ptr1++;
    ptr2--;
    }
}




int main() {
    std::vector <int>v {1, 2, 3, 4, 5};
    
    reverse(v);

    for(int x : v){
        std::cout << x << std::endl;
    }
    return 0;
}