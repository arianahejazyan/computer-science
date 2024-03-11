#include "../../DS/Array/main.h"

template<typename T>
int binarySearch(const Array<T>& arr, const T& key, int left, int right) {
    if (right < left)
        return -1;
    
    int mid = (left + right) / 2;

    if (arr[mid] == key) 
        return mid;
    else if (arr[mid] < key) 
        binarySearch(arr, key, mid + 1, right);
    else
        binarySearch(arr, key, left, mid - 1);
}

template<typename T>
int binarySearch(const Array<T>& arr, const T& key) {
    return binarySearch(arr, key, 0, arr.size() - 1);
}