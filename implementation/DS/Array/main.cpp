#include "main.h"

template<typename T>
Array<T>::Array(): arr(nullptr), size_(0), capacity_(0) {}

template<typename T>
Array<T>::Array(size_t capacity): size_(0), capacity_(capacity) {
    arr = new T[capacity];
}

template<typename T>
Array<T>::~Array() {
    delete[] arr;
}

template<typename T>
T& Array<T>::operator[](size_t index) const {
    return arr[index];
}

template<typename T>
void Array<T>::push_back(const T& element) {
    if (size_ >= capacity_) {
        if (capacity_ == 0) capacity_=1;
        else capacity_ *= 2;

        T* tmp = new T[capacity_];
        for (size_t i = 0; i < size_; i++) {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }    

    arr[size_++] = element;
}

template<typename T>
void Array<T>::pop_back() {
    size_--;
}

template<typename T>
size_t Array<T>::capacity() const {
    return capacity_;
}

template<typename T>
size_t Array<T>::size() const {
    return size_;
}