#ifndef BOB_H
#define BOB_H
#include <string>

namespace bob{
	static const std::string SURE =         "Sure.";
	static const std::string CHILL_OUT =    "Whoa, chill out!";
	static const std::string FINE =         "Fine. Be that way!";
	static const std::string WHATEVER =     "Whatever.";

	bool isSure(std::string s);
	bool isChillOut(std::string s);
	bool isFine(std::string s);
	bool isWhatever(std::string s);

	std::string hey(std::string phrase);
}

#endif