#include "utils.h"

template<typename T>
void swap(T& a, T& b) {
    T tmp = b;
    b = a;
    a = tmp;
}