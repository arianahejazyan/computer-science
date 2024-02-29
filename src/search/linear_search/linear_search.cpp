template<typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}