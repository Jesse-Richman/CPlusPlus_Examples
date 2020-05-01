#include "Word.h"

std::string Word::toLowerCase(std::string str)
{
	for (int i = 0; i < str.length(); ++i) {
		str[i] = tolower(str[i]);
	}

	return str;
}

Word::Word(std::string str) : word(toLowerCase(str)), frequency(1) {}

void Word::incrementFrequency()
{
	frequency++;
}

std::string Word::getWord() const
{
	return word;
}

int Word::getFrequency() const
{
	return frequency;
}