/*
Upgrade the Book class.

Tasks:
- keep the same constructor
- add a public function called isLongBook()
- the function should return true if the book has 300 pages or more
- otherwise it should return false
- in main, create one Book object
- print the book info
- then print whether it is a long book or not
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
    bool isLongBook(){
        if (pages >= 300){ 
            return true;
        }
        else {
            return false;
        }
    }

    void printInfo(){
        std::cout << "The title of the book is: " << title << std::endl;
        std::cout << "The number of pages in the book is: " << pages << std::endl;
    }

};

int main(){
    Book book1(350, "Hamlet");
    book1.printInfo();
    std::cout << book1.isLongBook() << std::endl;

    return 0;
}