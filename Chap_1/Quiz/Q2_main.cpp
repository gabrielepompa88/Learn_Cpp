/*
 
 To compile: g++ -o Q2_main Q2_main.cpp Q2_io.cpp
 
*/

int readNumber();
void writeAnswer(int n);

int main()
{
    int n1;
    int n2;
    
    n1 = readNumber();
    n2 = readNumber();
    
    writeAnswer(n1+n2);
    
    return 0;
}
