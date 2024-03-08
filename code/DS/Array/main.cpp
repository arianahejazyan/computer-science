#include "main.h"
#include <stdexcept>

template<typename T>
void Array<T>::checkIndex(size_t index) const {
    if (index < 0 || index >= m_size) throw std::out_of_range("Index out of range");
}

template<typename T>
void Array<T>::checkUnderFlow() const {
    if (m_size == 0) throw std::underflow_error("Cannot pop from an empty array");
}

template<typename T>
void Array<T>::growCapacity() {
    if (m_size >= m_capacity) {
        if (m_capacity== 0) m_capacity=1;
        else m_capacity *= 2;

        T* temp = new T[m_capacity];
        for (size_t i = 0; i < m_size; i++) {
            temp[i] = m_elements[i];
        }
        delete[] m_elements;
        m_elements = temp;
    }    
}

template<typename T>
void Array<T>::clear() {
    if (m_elements != nullptr) {
        delete[] m_elements;
        m_elements = nullptr;
        m_capacity = 0;
        m_size = 0;
    }
}

template<typename T>
Array<T>::Array(): m_elements(nullptr), m_size(0), m_capacity(0) {}

template<typename T>
Array<T>::Array(size_t capacity): m_size(0), m_capacity(capacity) {
    m_elements = new T[m_capacity];
}

template<typename T>
Array<T>::Array(std::initializer_list<T> list): Array(list.size()) {
    for (const T& item : list) {
        push_back(item);
    }
}

template<typename T>
Array<T>::~Array() {
    clear();
}

template<typename T>
Array<T>& Array<T>::operator=(std::initializer_list<T> list) { clear();
    m_elements = new T[list.size()];
    for (const T& element : list) {
        push_back(element);
    }
    return *this;
}

template<typename T>
size_t Array<T>::capacity() const {
    return m_capacity;
}

template<typename T>
size_t Array<T>::size() const {
    return m_size;
}

template<typename T>
T& Array<T>::operator[](size_t index) const { checkIndex(index);
    return *(m_elements + index);
}

template<typename T>
void Array<T>::push_back(const T& element) { growCapacity();
    m_elements[m_size++] = element;
}

template<typename T>
T& Array<T>::pop_back() { checkUnderFlow();
    return m_elements[--m_size];
}

template<typename T>
void Array<T>::insert(const T& element, size_t index) { checkIndex(index); growCapacity();
    for (size_t i = m_size; i > index; i--) {
        m_elements[i] = m_elements[i - 1];
    }
    m_elements[index] = element;
    m_size++;
}

template<typename T>
void Array<T>::erase(size_t index) { checkIndex(index);
    for (int i = index; i < m_size - 1; i++) {
        m_elements[i] = m_elements[i + 1];
    }
    m_size--;
}

template<typename T>
T* Array<T>::begin() const {
    return m_elements;
}

template<typename T>
T* Array<T>::end() const {
    return m_elements + m_size;
}