#include <iostream>
using namespace std;

int main() {
    int i,j, p, q, size;
    std::cin >> size;
    int* arr = new int[size];
    int* arr_sz = new int[size];

    for (i = 0; i < size; i++) {
        arr[i] = i;
        arr_sz[i] = 1;
    }

    while (std::cin >> p >> q) {
        for (i = p; i != arr[i]; i = arr[i]);
        for (j = q; j != arr[j]; j = arr[j]);

        if (arr_sz[i] < arr_sz[j]) {
            arr[i] = j; 
            arr_sz[j] += arr_sz[i];
        }
        else {
            arr[j] = i; 
            arr_sz[i] += arr_sz[j];
        }

        std::cout << "  " << p << "-" << q << " : ";

        for (int j = 0; j < size; j++) {
            std::cout << arr[j] << " ";
        }
        std::cout << std::endl;
    }


    delete[]arr;
    delete[]arr_sz;
}
