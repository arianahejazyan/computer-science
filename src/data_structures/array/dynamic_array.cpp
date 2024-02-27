#include "dynamic_array.h"

template<typename T>
DynamicArray<T>::DynamicArray(): arr(nullptr), size(0), capacity(0) {}

template<typename T>
DynamicArray<T>::DynamicArray(size_t initial_capacity): size(0), capacity(initial_capacity) {
    arr = new T[capacity];
}

template<typename T>
DynamicArray<T>::~DynamicArray() {
    delete arr;
}

template<typename T>
T& DynamicArray<T>::operator[](size_t index) const {
    return arr[index];
}

template<typename T>
void DynamicArray<T>::push(const T& element) {
    if (size >= capacity) {
        if (capacity == 0) capacity=1;
        else capacity *= 2;

        T* tmp = new T[capacity];
        for (size_t i = 0; i < size; i++) {
            tmp = arr;
        }
        delete arr[];
        arr = tmp;
    }    

    arr[size++] = element;
}

template<typename T>
void DynamicArray<T>::pop() {
    size--;
}

template<typename T>
size_t DynamicArray<T>::getCapacity() const {
    return capacity;
}

template<typename T>
size_t DynamicArray<T>::getSize() const {
    return size;
}