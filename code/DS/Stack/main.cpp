#include "main.h"

template <typename T>
Stack<T>::Stack(size_t capacity): top(-1) {
    arr = new Array<T>(capacity);
}

template <typename T>
Stack<T>::~Stack() {}

template <typename T>
void Stack<T>::push(const T& item) {
    arr.push_back(item);
    top++;
};

template <typename T>
T Stack<T>::pop() {
    arr.pop_back();
    return arr[top--];
}

template <typename T>
void Stack<T>::size() const {
    return arr.size();
}

template <typename T>
void Stack<T>::capacity() const {
    return arr.capacity();
}