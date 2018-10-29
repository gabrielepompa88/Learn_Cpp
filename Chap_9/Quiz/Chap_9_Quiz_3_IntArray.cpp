// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Chap_9_Quiz_3_IntArray Chap_9_Quiz_3_IntArray.cpp

#include <iostream>
#include <cassert> // for assert()

class IntArray{

private:
    
    int m_len = 0;
    int *m_arr = nullptr;
    
public:
    
    // default constructor
    IntArray(const int len):
        m_len(len)
    {
        assert(len > 0 && "Array length must be > 0");
        
        m_arr = new int[len] {0}; // uniform 0 initialization
    }
    
    // copy constructor (using deepcopy)
    IntArray(const IntArray &sourceArray):
        m_len(sourceArray.m_len)
    {
        if(sourceArray.m_arr != nullptr){
            
            m_arr = new int[m_len];
            
            for(int i = 0; i < m_len; ++i){
                m_arr[i] = sourceArray.m_arr[i];
            }
        }
    }
    
    // destructor
    ~IntArray(){
        delete[] m_arr;
    }
    
    // overloaded subscript [] operator
    int& operator[] (const int ind){
        
        assert(ind >= 0 && "Index has to be > 0");
        assert(ind < m_len && "Index has to be < length");
        
        return m_arr[ind];
    }
    
    // overloaded assignment operator = (using deep copy)
    IntArray& operator= (IntArray& rhsArr){
        
        if(this == &rhsArr){return *this;}
        
        if(rhsArr.m_arr != nullptr){
            
            m_len = rhsArr.m_len;
            
            delete[] m_arr; // deleting lhs-array to prevent memory leaks when rhs is assigned
    
            m_arr = new int[m_len];
            

            for(int i = 0; i < m_len; ++i){
                m_arr[i] = rhsArr.m_arr[i];
            }
        }
        
        return *this;
    }
    
    // overloaded << operator
    friend std::ostream& operator<< (std::ostream& out, IntArray& arr){
        
        if(arr.m_arr != nullptr){
        
            for(int i = 0; i < arr.m_len; ++i){
                out << arr.m_arr[i] << " ";
            }
        }
        
        return out;
    }
    
    IntArray fillArray();
};


IntArray fillArray()
{
    IntArray a(5);
    a[0] = 5;
    a[1] = 8;
    a[2] = 2;
    a[3] = 3;
    a[4] = 6;
    
    return a;
}

int main()
{
    IntArray a = fillArray();
    std::cout << a << '\n';
    
    IntArray b(1);
    a = a;
    b = a;
    
    std::cout << b << '\n';
    
    return 0;
}