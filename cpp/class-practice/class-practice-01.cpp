/* 
Rectangle with height and with, using struct
*/

#include <iostream>

struct rectangle {
    double width;
    double height;

    double get_area() {
        return width * height;
    }
};


int main(){
    struct rectangle rec1; //struct uncessary in cpp, required in c. 
    rec1.width = 10;
    rec1.height = 20;

    std::cout << rec1.get_area() << std::endl;

    return 0;
}