const int ZERO = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    int mySqrt(int x) {
        long left = 1,
            right = static_cast<long>(x) + 1;
        while (left < right) {
            long middle = left + (right - left) / 2;
            if (middle * middle > x) {
                right = middle;
            }
            else {
                left = middle + 1;
            }
        }

        return left - 1;
    }
};
