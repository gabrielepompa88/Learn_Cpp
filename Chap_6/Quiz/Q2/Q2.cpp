// g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Q2 Q2.cpp ./functions/fillStudentRegister.cpp ./functions/sortStudentRegister.cpp

#include <iostream>

#include "studentGrades.h"

void fillStudentRegister(studentGrades *studentAndGradeList, int nStud);
void sortStudentRegister(studentGrades *studentAndGradeList, int nStud);

int main()
{
    
    std::cout << "How many users? ";
    int nStud;
    std::cin >> nStud;
    
    studentGrades *inputStudents = new studentGrades[nStud];
    
    fillStudentRegister(inputStudents, nStud);

    std::cout << "Input student list: \n";
    for(int i = 0; i < nStud; ++i){
        std::cout << "#" << i+1 << " - Name: " << inputStudents[i].name << " - grade = " << inputStudents[i].grade << std::endl;
    }

    sortStudentRegister(inputStudents, nStud);
    
    std::cout << "Sorted student list: \n";
    for(int i = 0; i < nStud; ++i){
        std::cout << "#" << i+1 << " - Name: " << inputStudents[i].name << " - grade = " << inputStudents[i].grade << std::endl;
    }
    
    delete[] inputStudents;
    
    return 0;
}