#include <stddef.h>
#include <initializer_list>

template<typename T>
class Array
{
    private:

        T* m_elements;
        size_t m_capacity;
        size_t m_size;

        /* ---------------------------------------------------------------------------- */

        void checkIndex(size_t index) const;

        void checkUnderFlow() const;

        void growCapacity();

        void clear();

    private:

        Array();

        Array(size_t capacity);

        Array(std::initializer_list<T> list);

        ~Array();

        Array& operator=(std::initializer_list<T> list);

        T& operator[](size_t index) const;

        size_t size() const;

        void push_back(const T& element);

        T& pop_back();

        void insert(const T& element, size_t index);

        void erase(size_t index);

        T* begin() const;

        T* end() const;
};
