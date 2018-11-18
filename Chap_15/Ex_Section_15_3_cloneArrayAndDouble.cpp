// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Ex_Section_15_3_cloneArrayAndDouble Ex_Section_15_3_cloneArrayAndDouble.cpp

template <class T>
class DynamicArray
{
private:
    T* m_array;
    int m_length;
    
public:
    DynamicArray(int length)
    : m_array(new T[length]), m_length(length)
    {
    }
    
    ~DynamicArray()
    {
        delete[] m_array;
    }
    
    // Copy constructor
    DynamicArray(const DynamicArray &arr) = delete;
    
    // Copy assignment
    DynamicArray& operator=(const DynamicArray &arr) = delete;
    
    // Move constructor
    DynamicArray(DynamicArray &&arr)
    : m_array(arr.m_array), m_length(arr.m_length)
    {
        arr.m_length = 0;
        arr.m_array = nullptr;
    }
    
    // Move assignment
    DynamicArray& operator=(DynamicArray &&arr)
    {
        if (&arr == this)
            return *this;
        
        delete[] m_array;
        
        m_length = arr.m_length;
        m_array = arr.m_array;
        arr.m_length = 0;
        arr.m_array = nullptr;
        
        return *this;
    }
    
    int getLength() const { return m_length; }
    T& operator[](int index) { return m_array[index]; }
    const T& operator[](int index) const { return m_array[index]; }
    
};

#include <iostream>
#include <chrono> // for std::chrono functions
#include <utility>

class Timer
{
private:
    // Type aliases to make accessing nested type easier
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1> >;
    
    std::chrono::time_point<clock_t> m_beg;
    
public:
    Timer() : m_beg(clock_t::now())
    {
    }
    
    void reset()
    {
        m_beg = clock_t::now();
    }
    
    double elapsed() const
    {
        return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
    }
};

// Return a copy of arr with all of the values doubled
DynamicArray<int> cloneArrayAndDouble(const DynamicArray<int> &arr)
{
    DynamicArray<int> dbl(arr.getLength());
    for (int i = 0; i < arr.getLength(); ++i)
        dbl[i] = arr[i] * 2;
    
    return dbl;
}

void swapArrays(DynamicArray<int> &arr_a, DynamicArray<int> &arr_b)
{
    std::cout << "Copy semantics version called" << "\n";

    for (int i = 0; i < arr_a.getLength(); ++i)
    {
        int tmp = arr_a[i];
        arr_a[i] = arr_b[i];
        arr_b[i] = tmp;
    }
}

void swapArrays(DynamicArray<int> &arr_a, DynamicArray<int> &arr_b, int)
{
    std::cout << "Move semantics version called" << "\n";
    
    for (int i = 0; i < arr_a.getLength(); ++i)
    {
        int tmp = std::move(arr_a[i]);
        arr_a[i] = std::move(arr_b[i]);
        arr_b[i] = std::move(tmp);
    }
}

int main()
{
    DynamicArray<int> arr_a(1000000), arr_b(1000000);
    
    for (int i = 0; i < arr_a.getLength(); i++)
        arr_a[i] = i;
    
    arr_b = cloneArrayAndDouble(arr_a);
    
    std::cout << "\n";
    std::cout << "Pre swap" << "\n";
    std::cout << "arr_a[17] = " << arr_a[17] << "\n";
    std::cout << "arr_b[17] = " << arr_b[17] << "\n";
    
    Timer t_copy;
    swapArrays(arr_a, arr_b); // copy semantics
    std::cout << t_copy.elapsed();

    std::cout << "\n";
    std::cout << "Post swap" << "\n";
    std::cout << "arr_a[17] = " << arr_a[17] << "\n";
    std::cout << "arr_b[17] = " << arr_b[17] << "\n";

    DynamicArray<int> arr_c(1000000), arr_d(1000000);
    
    for (int i = 0; i < arr_c.getLength(); i++)
        arr_c[i] = i;
    
    arr_d = cloneArrayAndDouble(arr_c);
    
    std::cout << "\n";
    std::cout << "Pre swap" << "\n";
    std::cout << "arr_c[17] = " << arr_c[17] << "\n";
    std::cout << "arr_d[17] = " << arr_d[17] << "\n";
    
    Timer t_move;
    swapArrays(arr_c, arr_d, 1); // move semantics
    std::cout << t_move.elapsed();
    
    std::cout << "\n";
    std::cout << "Post swap" << "\n";
    std::cout << "arr_c[17] = " << arr_c[17] << "\n";
    std::cout << "arr_d[17] = " << arr_d[17] << "\n";
    
    return 0;

}