// g++ -Wall -Wextra -Wpedantic -std=c++11 -o parameter_and_return_type_examples parameter_and_return_type_examples.cpp

// 1
int sumTo(const int n);

// 2
#include <string>

struct Employee{

    std::string name;
    int age;
    double wage;
};

void printEmployeeName(const Employee &emp);

// 3
void minmax(const int a, const int b, int &minOut, int &maxOut);

/*
alternatively:

#include <tuple>
std::tuple<int, int> minmax(const int a, const int b);
*/

// 4
int getIndexOfLargestValue(const int *array, const int arraySize);

// 5
const int & getElement(const int *array, const int index);

int main()
{
    return 0;
}