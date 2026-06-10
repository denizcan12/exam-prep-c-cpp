#include <iostream>
#include <string>

struct Player{

    std::string name;
    
    double getPosition() const{
        return position;
    }

    void movePlayer(){
        position++;
        position;
    }

private:
double position{};

};

int main(){
    Player p;
    p.name= "Denizcan";
    std::cout << p.getPosition() << std::endl;
    p.movePlayer();
    std::cout << p.getPosition() << std::endl;


}