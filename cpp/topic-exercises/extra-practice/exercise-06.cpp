/*
Exercise 6 — GradeBook Class

Create a class called GradeBook.

The class should contain:
- a private string student_name
- a private vector<int> grades

The class should have:
- a constructor that takes the student name
- void add_grade(int g)
- double average() const
- int max_grade() const
- std::string get_name() const
- void print_info() const

Rules:
- grades must be between 0 and 30
- if add_grade receives an invalid grade, do nothing
- average() should return 0 if there are no grades
- max_grade() should return 0 if there are no grades

Example:
GradeBook gb("Denizcan");
gb.add_grade(25);
gb.add_grade(30);
gb.add_grade(18);

gb.print_info();
*/

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class GradeBook{
    private:
    string student_name;
    vector<int> grades;

    public:
    GradeBook(string name){
        student_name = name;
    }
    
    void add_grade(int g){
        if (g <= 30 && g>=0) grades.push_back(g);
    }

    double average()const{
        if (grades.empty()) return 0;

        double sum{};
        for (double x : grades){
            sum = sum + x;
        }
        double average = sum / grades.size();

        return average;
    }

    int max_grade() const{
        if (grades.empty()) return 0;

        int max = grades[0];

        for (int x{}; x < grades.size(); x++){
            if (grades[x] > max){
                max = grades[x]; 
            }
        }
        return max;
    }
    
    string get_name()const{
        return student_name;
    }

    void print_info()const{
        cout << "Student name is: " << student_name << endl;
        for (int x : grades){
            cout << "Grades : " << x << endl; 
        }
        

    }
};

int main() {

    GradeBook gb("Denizcan");
    gb.add_grade(25);
    gb.add_grade(30);
    gb.add_grade(18);
    gb.add_grade(40);   // invalid, should do nothing

    gb.print_info();

    std::cout << gb.get_name() << std::endl;
    std::cout << gb.average() << std::endl;
    std::cout << gb.max_grade() << std::endl;

    return 0;
}