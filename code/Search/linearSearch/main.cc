#include "../../DS/Array/main.h"

template<typename T>
int linearSearchIterative(const Array<T>& arr, const T& key) {
    int i = 0;
    for (const T& element: arr) {
        if (element == key) return i; i++;
    } return -1;
}

template<typename T>
int linearSearchRecursive(const Array<T>& arr, const T& key, int idx=0) {
    if (idx >= arr.size())
        return -1;

    if (arr[idx] == key)
        return idx;
    
    return linearSearchRecursive(arr, key, idx + 1);
}