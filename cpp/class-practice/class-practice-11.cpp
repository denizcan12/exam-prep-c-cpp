/*
Create a class called Movie.

The class should contain:
- a private string name
- a private int duration

The class should have:
- a constructor with parameters name and duration
- a copy constructor
- a function printInfo()

Rules:
- in the copy constructor, copy the values from the other object
- print a message inside the normal constructor
- print a message inside the copy constructor
- do not use getters or setters

In main:
- create one Movie object
- create a second Movie object as a copy of the first one
- print both objects
*/

#include <string>
#include <iostream>
using namespace std;

class Movie{
    private:
    string name;
    int duration;

    public:
    Movie(string name, int duration){
        this->name = name;
        this->duration = duration;
        cout << "Parameterized constructor is set." << endl;
    }

    ~Movie(){
        cout << "Movie Object is Deleted" << endl;
    }
    
    Movie(const Movie &other){
        name = other.name;
        duration = other.duration;
        cout << "Copy contructor is set." << endl;
    }

    void printInfo(){
        cout << "Name: " << name << endl;
        cout << "Duration: " << duration << endl;
    }
};

int main(){
    Movie newMovie("John Wick", 3);
    Movie secondMovie(newMovie);
    secondMovie.printInfo();
    newMovie.printInfo();

    return 0;
}