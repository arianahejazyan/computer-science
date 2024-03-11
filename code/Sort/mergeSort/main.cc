#include "../../DS/Array/main.h"
#include "../../utils/utils.h"

template<typename T>
static void merge(Array<T>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    T sub1[n1], sub2[n2];

    for (int i = 0; i < n1; i++)
        sub1[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        sub2[i] = arr[mid + 1 + i];

    int i=0, j=0, k=left;

    while (i < n1 && j < n2) {
        if (sub1[i] <= sub2[j]) arr[k++] = sub1[i++];
        else arr[k++] = sub2[j++];
    }

    while (i < n1) arr[k++] = sub1[i++];
    while (j < n2) arr[k++] = sub2[j++];
}

template<typename T>
void mergeSort(Array<T>& arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

template<typename T>
void mergeSort(Array<T>& arr) {
    mergeSort(arr, 0, arr.size() - 1);
}