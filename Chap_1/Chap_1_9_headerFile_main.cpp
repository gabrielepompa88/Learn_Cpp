/*

 To produce the executable "Chap_1_9_headerFile_example", this .cpp should be compiled with Chap_1_8_multipleFiles_add.cpp as:
 
 g++ -o Chap_1_9_headerFile_example Chap_1_9_headerFile_main.cpp Chap_1_8_multipleFiles_add.cpp
 
 Alternatively, as separate compilations:
 
 1) g++ -c Chap_1_9_headerFile_main.cpp Chap_1_8_multipleFiles_add.cpp
 2) g++ -o Chap_1_9_headerFile_example Chap_1_9_headerFile_main.o Chap_1_8_multipleFiles_add.o
 
 where 1) produces the object files Chap_1_9_headerFile_main.o Chap_1_8_multipleFiles_add.o, which are then linked together in 2) producing the executable "Chap_1_9_headerFile_example"
 
 
 */

#include <iostream>
#include "Chap_1_9_headerFile_add.h"

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
    return 0;
}
