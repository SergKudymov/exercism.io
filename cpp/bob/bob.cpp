#include "bob.h"
#include <string>
#include <algorithm>

//-----------------------------------------------------------

bool bob::isSure(std::string s) {
	if (s.back() == '?')
		return true;
	return false;
}

//-----------------------------------------------------------

bool bob::isChillOut(std::string s) {
	s.erase(std::remove_if(s.begin(), s.end(), 
		[](const char& c)
	{
		return isdigit(c) || ispunct(c);
	}), s.end());

	if (s.empty())
		return false;

	return std::all_of(s.begin(), s.end(), isupper);
}

//-----------------------------------------------------------

bool bob::isFine(std::string s) {
	return s.empty();
}

//-----------------------------------------------------------

std::string bob::hey(std::string phrase) {
	phrase.erase(std::remove_if(phrase.begin(), phrase.end(), isspace), phrase.end());

	if (isChillOut(phrase))
		return CHILL_OUT;
	if (isSure(phrase))
		return SURE;
	if (isFine(phrase))
		return FINE;

	return bob::WHATEVER;
}