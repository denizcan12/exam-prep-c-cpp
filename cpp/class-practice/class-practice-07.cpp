/*
Upgrade the Book class.

Tasks:
- keep the same constructor
- keep isLongBook()
- add a getter called getTitle()
- add a getter called getPages()

Rules:
- both getters should return the corresponding private value
- both getters should take no parameters
- in main, print the title using getTitle()
- in main, print the number of pages using getPages()
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
    std::string getTitle()const {
        return title;
    }

    int getPages()const {
        return pages;
    }

    bool isLongBook()const {
        if (pages >= 300){ 
            return true;
        }
        else {
            return false;
        }
    }

    void printInfo()const {
        std::cout << "The title of the book is: " << title << std::endl;
        std::cout << "The number of pages in the book is: " << pages << std::endl;
    }

};

int main(){
    Book book1(350, "Hamlet");
    book1.printInfo();
    std::cout << book1.isLongBook() << std::endl;

    std::cout << "Title of the book is: " << book1.getTitle() << std::endl;
    std::cout << "The number of pages in the book is: " << book1.getPages() << std::endl;

    return 0;
}