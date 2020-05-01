#include <iostream>
#include "Review.h"

using namespace std;

#if 1
int main()
{
    char string1[] = "The item worked as expected. But, the one thing I wished the item had was a special button. I think the item would be better because of this special button.";
    char seps[] = " ,.";
    char *token = NULL;
    char *nextToken = NULL;

    Review review;
    cout << string1 << endl;
    token = strtok_s(string1, seps, &nextToken);

    while (token != NULL) {
        // get the next token
        if (token != NULL) {
            review.addWord(token);
            token = strtok_s(NULL, seps, &nextToken);
        }
    }
    
    review.printWords();

    return 0;
}
#endif