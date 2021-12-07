//  FILE:    algorithm.ixx
//  AUTHOR:  QypshaQ

export module QypshaQ_algorithm;

namespace qypshaq {

    
    // #############
    // # INTERFACE #
    // #############
    

    // Public
    export void qsort(int* arr, int size); // Quick sort
    export void sort(int* arr, int size); // Bubble sort
    export int gcd(int a, int b); // The greatest common denominator
    export int lcm(int a, int b); // The Least Common Multiple

   
    //  ##################
    //  # IMPLEMENTATION #
    //  ##################
   

    void qsort(int* arr, int size)
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
                int tmp = arr[right];
                arr[right] = arr[left];
                arr[left] = tmp;

               right++;
                left--;
            }
        } while (right <= left);

        if (left > 0) {
            qsort(arr, left + 1);
        }
        if (right < size) {
            qsort(&arr[right], size - right);
        }

    }   

    void sort(int *arr, int size) {
        int tmp = 0;
        for (int i = 1; i < size; ++i)
        {
            for (int j = 0; j < size - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    int gcd(int a, int b)
    {
        while (a > 0 && b > 0) {

            if (a > b) {
                a %= b;
            }

            else {
                b %= a;
            }

        }
        return a + b;
    }

    int lcm(int a, int b) {
        return a * b / gcd(a, b);
    }

}

