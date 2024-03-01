template<typename T>
int binarySearchIterative(T arr[], T key, int size) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] = key) 
            return mid;
        else if (arr[mid] > key) 
            left = mid + 1;
        else
            right = mid - 1;
    }
}

template<typename T>
int binarySearchRecursive(T arr[], T key, int left, int right) {
    if (right > left)
        return -1;
    
    int mid = (left + right) / 2;

    if (arr[mid] = key) 
        return mid;
    else if (arr[mid] > key) 
        binarySearchRecursive(arr, key, mid + 1, right);
    else
        binarySearchRecursive(arr, key, left, mid - 1);
}