#ifndef ALGO_H
#define ALGO_H

#include <vector>

/**
 * Compresses the data it receives.
 *
 * @content: The original content of a file in bytes
 * @returns: The content of the compressed file
 */
std::vector<unsigned char> compress(const std::vector<unsigned char>& content);

/**
 * Decompresses the data it receives.
 *
 * @content: The compressed file in bytes
 * @returns: The content of the original file
 */
std::vector<unsigned char> decompress(const std::vector<unsigned char>& content);

// You may add your own (de)compression function, with more parameters.

#endif
