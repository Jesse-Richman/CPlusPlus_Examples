#include "Review.h"
#include <iostream>
#include <iomanip>

Review::Review() {}

void Review::addWord(char *newWord) {
	Word word(newWord);
	bool exists = false;
	// check if the word already exists in the vector
	for (int i = 0; i < words.size(); ++i) {
		if (words[i].getWord() == word.getWord()) {
			words[i].incrementFrequency();
			return;
		}
	}
	words.push_back(word);
}

void Review::printWords() {
	for (Word w : words) {
		std::cout << std::setw(10) << w.getWord();
		std::cout << std::setw(20) << w.getFrequency() << "\n";
	}
}
