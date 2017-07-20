#include "hamming.h"
#include <stdexcept>

int hamming::compute(std::string dna1, std::string dna2){
	int counter = 0;

	if(dna1.length() != dna2.length())
		throw std::domain_error("dna1 != dna2");

	for(int i = 0; i != dna1.length(); ++i){
		if(dna1[i] != dna2[i])
			++counter;
	}
	return counter;
}