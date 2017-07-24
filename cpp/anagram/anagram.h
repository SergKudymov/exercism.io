#ifndef ANAGRAM_H
#define ANAGRAM_H

#include <string>
#include <vector>

namespace anagram {
	class anagram
	{
	public:
		anagram();
		anagram(const std::string str);
		~anagram();

		std::vector<std::string> matches(const std::vector<std::string> strings);

	private:
		std::string original_;
		std::string anagram_;
		std::vector<std::string> matches_;
	};
}



#endif