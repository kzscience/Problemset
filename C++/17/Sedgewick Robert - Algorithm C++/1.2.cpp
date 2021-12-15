#include <iostream>
#include <array>
#include <numeric>

int main() {
    const int size = 10;
    int p, q;
    std::array<int, size> id;
    std::iota(id.begin(), id.end(), 0);
    while (std::cin >> p >> q) {
        int i, j;
        for (i = 0; i != id[i]; i = id[i]);
        for (j = q; j != id[j]; j = id[j]);

        id[i] = j;
           
        std::cout << " " << p << " " << q << " : ";

        for (int j = 0; j < size; j++) {
            std::cout << id[j] << " ";
        }
        std::cout << std::endl;
    }

}
