#include <iostream>
#include <array>
#include <numeric>

int main() {
    const int size = 10;
    int p, q;
    std::array<int, size> id;
    std::array<int, size> sz;
    sz.fill(1);
    std::iota(id.begin(), id.end(), 0);
    while (std::cin >> p >> q) {
        int i, j;
        for (i = 0; i != id[i]; i = id[i]);
        for (j = q; j != id[j]; j = id[j]);

        if (sz[i] < sz[j]) {
            id[i] = j;
            sz[j] += sz[i];
        }
        else {
            id[j] = i;
            sz[i] += sz[j];
        }
           
        std::cout << " " << p << " " << q << " : ";

        for (int j = 0; j < size; j++) {
            std::cout << id[j] << " ";
        }
        std::cout << std::endl;
    }

}
