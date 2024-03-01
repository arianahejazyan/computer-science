template<typename T>
int linearSearchIterative(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

template<typename T>
int linearSearchRecursive(T arr[], int size, T key, int idx) {
    if (idx >= size)
        return -1;

    if (arr[idx] == key)
        return idx;
    
    return linearSearchRecursive(arr, size, key, idx + 1);
}