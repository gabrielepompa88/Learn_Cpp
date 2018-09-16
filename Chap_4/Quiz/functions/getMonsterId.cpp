// g++ -c getMonsterId.cpp

int getMonsterId(){
    
    static int s_Id = 1;
    return s_Id++;
}