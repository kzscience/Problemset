//  FILE:    QypshaQ_recursive_sorts.cpp
//  AUTHOR:  QypshaQ

#include "QypshaQ_recursive_sorts.h"
namespace qypshaq {

    void swap(int arr*, int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    void recursive_bubblesort(int* arr, int size)
    {
        for (int k = 0; k < size - 1; k++)
        {
            for (int i = 0; i < size - 1 - k; i++)
            {
                if (arr[i] > arr[i + 1]) {
                    swap(arr, i, i + 1);
                }
            }

        }
    }



    void recursive_insertionsort(int* arr, int size)
    {
      if (size <= 1) {
            return;
        }

        recursive_insertionsort(arr, size - 1);
        int last = arr[size - 1];
        int pos = size - 2;
            while (pos >= 0 && arr[pos] > last) {
                arr[pos + 1] = arr[pos];
                pos = pos - 1;
            }
            arr[pos + 1] = last;
    }

    void recursive_selectionsort(int* arr, int size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            int min = i;

            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[min]) {
                    min = j;   
                }
            }

            swap(arr, min, i);
        }
    }

    int min(int x, int y) {
        return (x < y) ? x : y;
    }

    void merge(int* arr, int const left, int const middle, int const right)
    {
        auto const subArrayOne = middle - left + 1;
        auto const subArrayTwo = right - middle;

        auto* leftArray = new int[subArrayOne],
            * rightArray = new int[subArrayTwo];

        for (auto i = 0; i < subArrayOne; i++) {
            leftArray[i] = arr[left + i];
        }
            
        for (auto j = 0; j < subArrayTwo; j++) {
            rightArray[j] = arr[middle + 1 + j];
        }
            

        auto indexOfSubArrayOne = 0, 
            indexOfSubArrayTwo = 0; 
        int indexOfMergedArray = left;

        while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
            if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
                arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
                indexOfSubArrayOne++;
            }
            else {
                arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
                indexOfSubArrayTwo++;
            }
            indexOfMergedArray++;
        }

        while (indexOfSubArrayOne < subArrayOne) {
            arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
            indexOfMergedArray++;
        }

        while (indexOfSubArrayTwo < subArrayTwo) {
            arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
            indexOfMergedArray++;
        }
    }

    void recursive_mergesort(int* arr, int const begin, int const end)
    {
        if (begin >= end) {
            return;
        }
          
        auto middle = begin + (end - begin) / 2;
        recursive_mergesort(arr, begin, middle);
        recursive_mergesort(arr, middle + 1, end);
        merge(arr, begin, middle, end);
    }

  
    void recursive_quicksort(int* arr, int size)
    {

        int right = 0,
            left = size - 1,
            middle = arr[size / 2];

        do {
            while (arr[right] < middle) {
                right++;
            }

            while (arr[left] > middle) {
                left--;
            }

            if (right <= left) {
                swap(arr, right, left);

                right++;
                left--;
            }
        } while (right <= left);

        if (left > 0) {
            recursive_quicksort(arr, left + 1);
        }
        if (right < size) {
            recursive_quicksort(&arr[right], size - right);
        }

    }



}
