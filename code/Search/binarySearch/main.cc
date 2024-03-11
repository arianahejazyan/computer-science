#include "../../DS/Array/main.h"

template<typename T>
int binarySearchIterative(const Array<T>& arr, const T& key) {
    int left = 0, right = arr.size() - 1, mid;
    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == key) 
            return mid;
        else if (arr[mid] < key) 
            left = mid + 1;
        else
            right = mid - 1;
    } return -1;
}

template<typename T>
int binarySearchRecursive(const Array<T>& arr, const T& key, int left, int right) {
    if (right < left)
        return -1;
    
    int mid = (left + right) / 2;

    if (arr[mid] == key) 
        return mid;
    else if (arr[mid] < key) 
        binarySearchRecursive(arr, key, mid + 1, right);
    else
        binarySearchRecursive(arr, key, left, mid - 1);
}