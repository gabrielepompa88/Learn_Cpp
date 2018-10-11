// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q1 Q1_function_prototypes.cpp

// a: A function named max() that takes two doubles and returns the larger of the two.
double max(const double x, const double y);

// b: A function named swap() that swaps two integers.
void swap(int &n, int &m);

// c: A function named getLargestElement() that takes a dynamically allocated array of integers and returns the largest number in such a way that the caller can change the value of the element returned (don’t forget the length parameter).
int& getLargestElement(int *array, int lengthArray);


int main()
{
    return 0;
}