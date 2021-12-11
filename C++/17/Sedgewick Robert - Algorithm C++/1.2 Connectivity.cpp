#include <iostream>

int main() {
    int i,j, p, q, size;
    std::cin >> size;
    int* arr = new int[size];

    for (i = 0; i < size; i++) {
        arr[i] = i;
    }

    while (std::cin >> p >> q) {
        for (i = p; i != arr[i]; i = arr[i]);
        for (j = q; j != arr[j]; j = arr[j]);

        arr[i] = j;

        std::cout << "  " << p << "-" << q << " : ";

        for (int j = 0; j < size; j++) {
            std::cout << arr[j] << " ";
        }
        std::cout << std::endl;
    }
    delete[]arr;
    

}
