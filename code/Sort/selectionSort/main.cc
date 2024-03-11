#include "../../DS/Array/main.h"
#include "../../utils/utils.h"

template<typename T>
static int select(Array<T>& arr, int idx) {
    for (int i = idx; i < arr.size(); i++) {
        if (arr[i] < arr[idx]) idx = i;
    } return idx;
}

template<typename T>
void selectionSort(Array<T>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int idx = select(arr, i);
        swap(arr[i], arr[idx]);
    }
}