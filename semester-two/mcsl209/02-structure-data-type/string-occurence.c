#include <stdio.h>
#include <string.h>


struct WordCount {
    char *word; // Will contain the word string.
    int count; // Will contain no. of occurrences of that word.
};

int main() {

    int noOfWords = 0, uniqueWordsCount = 0, i = 0, j = 0;
    struct WordCount wordCount[100];

    char para[500], words[100][100];

    printf("Enter paragraph: \n");
    gets(para);

    for(i = 0; para[i] != '\0'; i++) {
        for(j=0; para[i] != ' '; i++,j++) {
            words[noOfWords][j] = para[i];
        }
        noOfWords++;
    }

    for (i = 0; i < noOfWords; i++) {
        int wordRepeated = 0;
        for (j = 0; j < uniqueWordsCount; j++) {
            if(strcmp(words[i], wordCount[j].word) == 0) {
                wordCount[j].count++;
                wordRepeated = 1;
            }
        }
        if (!wordRepeated) {
            wordCount[uniqueWordsCount].word = words[i];
            wordCount[uniqueWordsCount].count = 1;
            uniqueWordsCount++;
        }
    }

    for(i = 0; i < uniqueWordsCount; i++) {
        printf("Word: %s \n Count: %d \n", wordCount[i].word, wordCount[i].count);
    }


    return 0;

}