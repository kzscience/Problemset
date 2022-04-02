const int ZERO = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

class Solution{
public:
	std::vector<std::vector<int>> generate(const int &numRows) {
		std::vector<std::vector<int>>	 result;

		for (int i = 0; i < numRows; i++) {

			std::vector<int> v(i + 1, 1);

			for (int j = 1; j < i; j++) {
				v[j] = result[i - 1][j] + result[i - 1][j - 1];
			}
			result.push_back(v);
		}

		return result;
	}

};