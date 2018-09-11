/* 
 To produce the executable "Chap_1_8_multipleFiles_example", this .cpp should be compiled with Chap_1_8_multipleFiles_add.cpp as:
 
 g++ -o Chap_1_8_multipleFiles_example Chap_1_8_multipleFiles_main.cpp Chap_1_8_multipleFiles_add.cpp

 */

#include <iostream>

int add(int x, int y); // needed so main.cpp knows that add() is a function declared elsewhere

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
    return 0;
}
