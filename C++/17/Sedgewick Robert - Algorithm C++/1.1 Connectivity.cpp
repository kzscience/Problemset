//  Give the output that the connectivity algorithm should produce for input pairs 0-2, 1-4, 2-5, 3-6, 0-4, 6-0, and 1-3.
#include <iostream>

int main() {
    int p, q, size;
    std::cin >> size;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    while (std::cin >> p >> q) {
        int tmp = arr[p];

        for (int i = 0; i < size; i++) {
            if (arr[i] == tmp) {
                arr[i] = arr[q];
            }
        }

        std::cout << "  " << p << "-" << q << " : ";

        for (int j = 0; j < size; j++) {
            std::cout << arr[j] << " ";
        }
        std::cout << std::endl;
    }
    delete[]arr;
}
