#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include "algo.h"

#define COMPRESS true
#define DECOMPRESS false

typedef unsigned char uchar;

void show_usage() {
	std::cout << "USAGE: ./tester operation_type input_file output_file\n";
	std::cout << "DESCRIPTION:\n";
	std::cout << "Parameter operation_type can be either -c (compress) or -d (decompress)\n";
	std::cout << "The program takes the path to an input file, ";
	std::cout << "applies the requested operation and ";
	std::cout << "writes the result in the target file \"output_file\"\n";
}

std::vector<uchar> read_binary_file(const std::string& path) {

	std::ifstream file(path, std::ios::binary);

	if (!file.is_open()) {
		std::cerr << "Invalid input file path\n";
		show_usage();
		exit(1);
	}

    file.unsetf(std::ios::skipws);

    // determine the size of the file
    std::streampos size;
    file.seekg(0, std::ios::end);
    size = file.tellg();

    // return cursor to the beginning
    file.seekg(0, std::ios::beg);
    std::vector<uchar> content;
    content.reserve(size);

    // parse content
    content.insert(content.begin(), 
    			   std::istream_iterator<uchar>(file),
               	   std::istream_iterator<uchar>());
    return content;
}

void write_binary_file(const std::string& path, const std::vector<uchar>& content) {
	std::ofstream file(path, std::ios::binary | std::ios::out);

	if (file.fail()) {
		std::cerr << "Couldn't open output file\n";
		show_usage();
		exit(1);
	}

	if (!content.empty()) {
		file.write((char*) &content[0], content.size() * sizeof(content[0]));
	}
}

int main (int argc, char* argv[]) {

	if (argc != 4) {
		show_usage();	
		return -1;
	}

	bool mode;
	
	// Determine the type of operation
	std::string operation_type(argv[1]);
	if (operation_type == "-c") {
		mode = COMPRESS;
	} else if (operation_type == "-d") {
		mode = DECOMPRESS;
	} else {
		show_usage();
		return -1;
	}

	// parse input file
	std::string input_file(argv[2]);
	std::vector<uchar> content = read_binary_file(input_file);

	std::vector<uchar> new_content;
	if (mode == COMPRESS) {
		new_content = compress(content);
	} else {
		new_content = decompress(content);
	}

	std::string output_file(argv[3]);
	write_binary_file(output_file, new_content);

	return 0;
}
