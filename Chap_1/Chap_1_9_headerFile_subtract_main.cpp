/*

Since Chap_1_9_headerFile_subtract.h is in the headers sub-directory, this .cpp file should be compiled with the g++ flag: "-I ./headers.
Furthermore, since function subtract() is defined in the Chap_1_9_headerFile_subtract.cpp in the sub-directory "functions", it should be compiled using ./functions/Chap_1_9_headerFile_subtract.cpp"
 */

#include <iostream>
#include "Chap_1_9_headerFile_subtract.h"

int main()
{
    std::cout << "The sum of 3 and 4 is: " << subtract(3, 4) << std::endl;
    return 0;
}
