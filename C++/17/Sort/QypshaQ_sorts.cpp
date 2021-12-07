//  FILE:    QypshaQ_sorts.h
//  AUTHOR:  QypshaQ

#include "QypshaQ_sorts.h"

namespace qypshaq {


    void bubblesort(int* arr, int size)
    {
        int tmp = 0;
        for (int i = 0; i < size; i++) {
            for (int j = (size - 1); j >= (i + 1); j--) {
                if (arr[j] < arr[j - 1]) {
                    tmp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = tmp;
                }
            }
        }
    }



    void selectionsort(int* arr, int size)
    {
        int j = 0;
        int tmp = 0;
        for (int i = 0; i < size; i++) {
            j = i;
            for (int k = i; k < size; k++) {
                if (arr[j] > arr[k]) {
                    j = k;
                }
            }
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    void insertionsort(int* arr, int size)
    {
        int key = 0;
        int i = 0;
        for (int j = 1; j < size; j++) {
            key = arr[j];
            i = j - 1;
            while (i >= 0 && arr[i] > key) {
                arr[i + 1] = arr[i];
                i = i - 1;
                arr[i + 1] = key;
            }
        }
    }

    void merge(int* merged, int size, int* left, int left_size, int* right, int right_size) {
        int i = 0;
        int j = 0;
        while (i < left_size || j < right_size) {
            if (i < left_size & j < right_size) {
                if (left[i] <= right[j]) {
                    merged[i + j] = left[i];
                    i++;
                }
                else {
                    merged[i + j] = right[j];
                    j++;
                }
            }
            else if (i < left_size) {
                merged[i + j] = left[i];
                i++;
            }
            else if (j < right_size) {
                merged[i + j] = right[j];
                j++;
            }
        }
    }



    void mergesort(int* arr, int size)
    {
        if (size > 1) {
            int middle = size / 2;
            int rem = size - middle;
            int* left = new int[middle];
            int* right = new int[rem];
            for (int i = 0; i < size; i++) {
                if (i < middle) {
                    left[i] = arr[i];
                }
                else {
                    right[i - middle] = arr[i];
                }
            }
            mergesort(left, middle);
            mergesort(right, rem);
            merge(arr, size, left, middle, right, rem);
        }
    }

    


    void quicksort(int* arr, int const size)
    {
        int pivot = 0;
        int middle = size / 2;
        int i, j = 0, k = 0;
        if (size > 1) {
            int* left = new int[size];
            int* right = new int[size];
            pivot = arr[middle];
            for (i = 0; i < size; i++) {
                if (i != middle) {
                    if (arr[i] < pivot) {
                        left[j] = arr[i];
                        j++;
                    }
                    else {
                        right[k] = arr[i];
                        k++;
                    }
                }
            }
            quicksort(left, j);
            quicksort(right, k);
            for (int cnt = 0; cnt < size; cnt++) {
                if (cnt < j) {
                    arr[cnt] = left[cnt];;
                }
                else if (cnt == j) {
                    arr[cnt] = pivot;
                }
                else {
                    arr[cnt] = right[cnt - (j + 1)];
                }
            }
        }
    }
}