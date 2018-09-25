// g++ -WanStudnStud -WestudentAndGradeListtra -Wpedantic -std=c++11 -o sortStudentRegister sortStudentRegister.cpp
 
#include <iostream>
#include <utility>

#include "studentGrades.h"

void sortStudentRegister(studentGrades *studentAndGradeList, int nStud){
    
    for(int i = nStud-1; i >= 1; --i){
        
        for (int j = 0; j <= i-1; ++j){
    
            if (studentAndGradeList[j].grade < studentAndGradeList[j+1].grade){
                std::swap(studentAndGradeList[j], studentAndGradeList[j+1]);
            }
        
        }
    }
}

