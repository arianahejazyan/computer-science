#include <iostream>

using namespace std;

template<typename T>
class DynamicArray
{
    private:

        T* arr;
        size_t size;
        size_t capacity;

    public:

        DynamicArray();

        DynamicArray(size_t initial_capacity);

        ~DynamicArray();
        
        T& operator[](size_t index) const;

        void push(const T& element);

        void pop();

        size_t getCapacity() const;

        size_t getSize() const;
};