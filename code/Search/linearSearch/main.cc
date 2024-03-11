#include "../../DS/Array/main.h"

template<typename T>
int linearSearch(const Array<T>& arr, const T& key) {
    int i = 0;
    for (const T& element: arr) {
        if (element == key) return i; i++;
    } return -1;
}