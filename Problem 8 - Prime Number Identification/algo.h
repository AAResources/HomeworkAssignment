#ifndef ALGO_H
#define ALGO_H

#include <vector>

/**
 * For a given sequence of integer numbers, filter the non-prime set of numbers.
 *
 * @graph: The original sequence of numbers.
 * @returns: The vector with only the prime numbers from the original sequence. (in the same relative order)
 */
std::vector<int> filter_non_prime(const std::vector<int>& sequence);

#endif