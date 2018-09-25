#include<iostream>
#include <string>

#include "studentGrades.h"

void fillStudentRegister(studentGrades *studentAndGradeList, int nStud){
    
    std::cout << "Please, input the students names and grades: \n";
    
    for(int i = 0; i < nStud; ++i){
        
        do{
            std::cout << "#" << i+1 << " - name: ";
            std::cin >> studentAndGradeList[i].name;
            
            std::cout << "#" << i+1 << " - grade = ";
            std::cin >> studentAndGradeList[i].grade;
            
            if((studentAndGradeList[i].grade < 0) || (studentAndGradeList[i].grade > 100)){
                std::cout << "Grade not valid, should be in [0,100]... please, input again. \n";
            }
        }
        while((studentAndGradeList[i].grade < 0) || (studentAndGradeList[i].grade > 100));
    }
}
