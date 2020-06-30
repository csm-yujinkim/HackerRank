// 2d-array.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <algorithm>
#include <array>

typedef std::array<std::array<int, 6ul>, 6ul> array2d;

int main()
{
	array2d xss;
	for (size_t row = 0ul; row < xss.size(); ++row) {
		for (size_t column = 0ul; column < xss[row].size(); ++column) {
			int x;
			std::cin >> x;
			xss[row][column] = x;
		}
	}
	int max_sum = std::numeric_limits<int>::min();
	for (size_t row = 0ul; row < 4ul; ++row) {
		for (size_t column = 0ul; column < 4ul; ++column) {
			int const partial_sum = xss[row][column] + xss[row][column + 1ul] + xss[row][column + 2ul]
				+ xss[row + 1ul][column + 1ul]
				+ xss[row + 2ul][column] + xss[row + 2ul][column + 1ul] + xss[row + 2ul][column + 2ul];
			max_sum = std::max(max_sum, partial_sum);
		}
	}
	std::cout << max_sum << '\n';
	return 0;
}
