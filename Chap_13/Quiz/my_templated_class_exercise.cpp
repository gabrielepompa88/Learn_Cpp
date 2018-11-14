// g++ -Wall -Wextra -Wpedantic -std=c++11 -o my_templated_class_exercise my_templated_class_exercise.cpp

#include <iostream>
#include <cstring>
#include <vector>


template <class T>
class TypeArray{
    
private:
    
    double m_scale;
    int m_L;
    T *m_array;
    
public:
    
    TypeArray(double scale, const std::vector<T> &source): m_scale(scale)
    {
        
        m_L = source.size();
        m_array = new T[m_L];
        
        int i=0;
        for(const T &elem: source){
            m_array[i] = elem * m_scale;
            i++;
        }
    }
    
    void print()
    {
        for(int i=0; i<m_L; i++){
            std::cout << m_array[i] << " ";
        }
        
        std::cout << "\n";
    }
    
    ~TypeArray(){
        
        delete[] m_array;
        std::cout << "m_array deleted" << "\n";
    }
    
};

int main(){

    std::vector<int> source_array = {2,4,6,8,10};
    
    TypeArray<int> my_arr(2.0, source_array);
    
    my_arr.print();
    
    return 0;
}