/*
Upgrade the Book class.

Tasks:
- keep the constructor
- keep the getters
- add a setter called setTitle()
- add a setter called setPages()

Rules:
- setTitle() should change the title
- setPages() should change the number of pages
- setPages() should not allow negative values
- in main, create one Book object
- print the original state
- then change both values using the setters
- then print the new state
*/

#include <iostream>
#include <string>

class Book{
private:
    std::string title;
    int pages;

public:
    Book(int pageNumber, std::string name){ //constructor
        title = name;
        pages = pageNumber; 
    } 

    bool isLongBook()const {
        if (pages >= 300){ 
            return true;
        }
        else {
            return false;
        }
    }
    void printInfo() const{
        std::cout << "The title of the book is: " << title << std::endl;
        std::cout << "The number of pages in the book is: " << pages << std::endl;
    }
    public: //getters

    std::string getTitle()const {
        return title;
    }

    int getPages()const {
        return pages;
    }

   
    public: //setters
        void setPages(int a){
            if (a >= 0) pages = a; 
        }

        void setTitle(std::string str){
            title = str;
        }
};

int main(){

    Book book1(350, "New Book");
    book1.printInfo();
    book1.setTitle("Hamlet");
    book1.setPages(500);
    book1.printInfo();

    return 0;
}