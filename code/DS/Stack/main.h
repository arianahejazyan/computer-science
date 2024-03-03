#include <stddef.h>
#include "../Array/main.h"

template<typename T>
class Stack
{
    private:
        Array<T> arr;
        size_t top;

    public:

        Stack(size_t capacity);

        ~Stack();

        void push(const T& item);

        T pop();

        void size() const;

        void capacity() const;
};