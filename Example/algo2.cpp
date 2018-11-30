#include "algo.h"
#include <algorithm>

void sort(std::vector<int>& input, const bool reverse) {

	/* Selection Sort */
	int i, elem, j, sz, new_idx;
	for (i = 0, sz = input.size(); i < sz; ++i) {

		/* Property: input[0...i -1] is sorted */
		elem = input[i];
		new_idx = i;

		/* Pick the next smallest element */
		for (j = i + 1; j < sz; ++j) {
			if (input[j] < elem) {
				elem = input[j];
				new_idx = j;
			}
		}
		
		if (i != new_idx) {
			std::swap(input[i], input[new_idx]);
		}
	}

	if (reverse) {
		std::reverse(input.begin(), input.end());
	}
}