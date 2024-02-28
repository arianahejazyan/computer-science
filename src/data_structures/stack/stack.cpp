#include "stack.h"

template <typename T>
Stack<T>::Stack(int capacity): top(-1) {
    arr = new T[capacity];
}

template <typename T>
Stack<T>::~Stack() {
    delete arr[];
}

template <typename T>
void Stack<T>::push(const T& item) {
    arr[++top] = item;
};

template <typename T>
T Stack<T>::pop() {
    return arr[top--];
}