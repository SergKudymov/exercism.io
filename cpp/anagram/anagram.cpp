#include "anagram.h"
#include <algorithm>
#include <vector>

anagram::anagram::anagram(const std::string str):
original_(str),
anagram_(str) 
{
	std::transform(original_.begin(), original_.end(), original_.begin(), ::tolower);
	std::transform(anagram_.begin(), anagram_.end(), anagram_.begin(), ::tolower);
	std::sort(anagram_.begin(), anagram_.end());
}

anagram::anagram::~anagram() {}

std::vector<std::string> anagram::anagram::matches(const std::vector<std::string> strings){
	std::vector<std::string> stringsSorted = strings;
	for (auto i: stringsSorted) {
		auto s = i;
		std::transform(i.begin(), i.end(), i.begin(), ::tolower);
		if (i == original_)
			continue;
		std::sort(i.begin(), i.end());
		if (i == anagram_) {
			matches_.push_back(s);
		}
	}
	return matches_;
}
