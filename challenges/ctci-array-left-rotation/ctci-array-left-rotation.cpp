// ctci-array-left-rotation.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	size_t n, d;
	std::cin >> n >> d;
	std::vector<unsigned> xs;
	xs.reserve(n * 2ul);
	for (size_t i = 0ul; i < n; ++i) {
		unsigned x;
		std::cin >> x;
		xs.push_back(x);
	}

	// Copy and slide algorithm
	std::copy_n(xs.begin(), xs.size(), std::back_inserter(xs));
	size_t const begin = d + 0ul;
	size_t const end = d + n;
	for (size_t i = begin; i < end; ++i) {
		std::cout << xs.at(i) << ' ';
	}
	return 0;
}
