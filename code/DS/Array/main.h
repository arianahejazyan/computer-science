#include <stddef.h>

template<typename T>
class Array
{
    private:

        T* arr;
        size_t size_;
        size_t capacity_;

    public:

        Array();

        Array(size_t capacity_);

        ~Array();
        
        T& operator[](size_t index) const;

        void push_back(const T& element);

        void pop_back();

        size_t capacity() const;

        size_t size() const;
};