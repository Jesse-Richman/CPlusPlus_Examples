#include "Word.h"
#include <vector>

#pragma once
class Review {
	std::vector<Word> words;
public:
	Review();
	void addWord(char *);
	void printWords();
};

