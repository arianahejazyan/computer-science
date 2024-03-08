#include "../Array/main.h"

template<typename T>
class Stack
{
    private:
        Array<T> items;

    public:

        Stack();

        ~Stack();

        void push(const T& item);

        T& pop();

        void size() const;
};