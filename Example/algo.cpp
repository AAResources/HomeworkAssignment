#include "algo.h"
#include <algorithm>

void sort(std::vector<int>& input, const bool reverse) {
    
	/* Insertion Sort */
	int i, elem, j, sz;
	for (i = 0, sz = input.size(); i < sz; ++i) {
		
		elem = input[i];

		/* Property: At this point, input[0...i - 1] is sorted.
		 * Task: Place the elem at position i on the correct location.
		 */
		for (j = i - 1; j >= 0 && elem < input[j]; --j) {
			input[j + 1] = input[j];
		}

		input[j + 1] = elem;
	}

	if (reverse) {
		std::reverse(input.begin(), input.end());
	}
}