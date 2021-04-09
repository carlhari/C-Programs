#include <iostream>
#include <vector>
#include <string>

int BinToDec(std::vector<int> bin);
std::string BinToHex(std::vector<int> bin);
std::vector<int> sliceInt(std::vector<int> list, int start, int end);
std::vector<int> reverse(std::vector<int> list);

int main() {

	// binary
	std::vector<int> bin = {1, 0, 1, 1, 1};
	// hexed: output
	std::cout << BinToHex(bin);

	std::cin.get();
	return 0;
}

/*
* Binary to Decimal
* @param: [std::vector<int>]
*/
int BinToDec(std::vector<int> bin) {
	int total = 0;
	int multiplier = 1;
	
	for (int i = bin.size() - 1; i >= 0; i--) {
		const int bit = bin[i];
		if (bit == 1) {
			total += multiplier;
		}
		multiplier *= 2;
	}

	return total;
}


/*
* Binary To Hexadecimal
* @param [std::vector<int>]
*/
std::string BinToHex(std::vector<int> bin) {
	std::vector<std::vector<int>> byts = {};
	std::vector<std::string> chars = {"A", "B", "C", "D", "E", "F"};
	std::string out = "";
	int from = 0;

	for (int i = 0; i < bin.size(); i++) {
		if (i % 4 == 0 || i == bin.size() - 1) {
			int to = i + 1;
			std::vector<int> collection = sliceInt(bin, from, to);

			byts.push_back(collection);
			from = to;
		}
	}

	for (const std::vector<int>bits : byts) {
		const int decimal = BinToDec(bits);

		if (decimal > 9) {
			out += chars[decimal % 10];
			continue;
		}
		out += std::to_string(decimal);
	}

	return out;
}

/**
* implement slice method
* @param: [std::vector<int>, int, int]
**/
std::vector<int> sliceInt(std::vector<int> list, int start, int end) {
	std::vector<int> collection = {};

	for (; start < end; start++) {
		collection.push_back(list[start]);
	}

	return collection;
}

/**
* implement reverse
* @param: [std::vector<int>]
*/
std::vector<int> reverse(std::vector<int> list) {
	std::vector<int> collection = {};

	for (int i = list.size() - 1; i >= 0; i--) {
		collection.push_back(list[i]);
	}

	return collection;
}