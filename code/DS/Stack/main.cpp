#include "main.h"

template <typename T>
Stack<T>::Stack() {
    items = new Array<T>();
}

template <typename T>
Stack<T>::~Stack() {}

template <typename T>
void Stack<T>::push(const T& item) {
    items.push_back(item);
};

template <typename T>
T& Stack<T>::pop() {
    return items.pop_back();
}

template <typename T>
void Stack<T>::size() const {
    return items.size();
}