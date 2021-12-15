//  Give the output that the connectivity algorithm should produce for input pairs 0-2, 1-4, 2-5, 3-6, 0-4, 6-0, and 1-3.
#include <iostream>
#include <array>
#include <numeric>

int main() {
    const int size = 10;
    int p, q;
    std::array<int, size> id;
    std::iota(id.begin(), id.end(), 0);
    while (std::cin >> p >> q) {
        int tmp = id[p];
        for (int i = 0; i < size; ++i) {
            if (id[i] == tmp) {
                id[i] = id[q];
            }
        }
           
        std::cout << " " << p << " " << q << std::endl;

        for (int j = 0; j < size; j++) {
            std::cout << id[j] << " ";
        }
        std::cout << std::endl;
    }

}
