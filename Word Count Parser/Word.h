#include <string>
#pragma once
class Word {
	std::string word;
	int frequency;
	std::string toLowerCase(std::string);
public:
	Word(std::string);
	void incrementFrequency();
	std::string getWord() const;
	int getFrequency() const;
};