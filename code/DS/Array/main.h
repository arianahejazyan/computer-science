#include <initializer_list>
#include <stddef.h>

template<typename T>
class Array
{
    private:

        T* m_elements;
        size_t m_size;
        size_t m_capacity;

        void checkIndex(size_t index) const;

        void checkUnderFlow() const;

        void growCapacity();

        void clear();

    public:

        Array();

        Array(size_t capacity);

        Array(std::initializer_list<T> list);

        ~Array();

        Array& operator=(std::initializer_list<T> list);

        size_t size() const;

        T& operator[](size_t index) const;

        void push_back(const T& element);

        T& pop_back();

        void insert(const T& element, size_t index);

        void erase(size_t index);

        T* begin() const;

        T* end() const;
};