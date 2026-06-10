/*
Create a class called Book.

The class should contain:
- a private string title
- a private int pages

The class should have:
- a constructor that takes title and pages as parameters
- a function printInfo() that prints both values

Rules:
- do not use in-class initialization for title or pages
- initialize them inside the constructor
- in main, create one Book object by giving the values at creation time
*/

#include <iostream>
#include <string>

class Book{
private:
    std::string title;
    int pages;

public:
    Book(int pageNumber, std::string name){
        title = name;
        pages = pageNumber; 
    }
    void printInfo(){
        std::cout << "The title of the book is: " << title << std::endl;
        std::cout << "The number of pages in the book is: " << pages << std::endl;
    }

};

int main(){
    Book book1(350, "Hamlet");
    book1.printInfo();
    return 0;
}