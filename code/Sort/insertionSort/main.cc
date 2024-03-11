#include "../../DS/Array/main.h"
#include "../../utils/utils.h"

template<typename T>
static void insert(Array<T>& arr, int i) {
    while (i > 0 && arr[i] < arr[i - 1]) {
        swap(arr[i], arr[i - 1]);
        i--;
    }
}

template<typename T>
void insertionSort(Array<T>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        insert(arr, i);
    }
}