#include <stdio.h>
#include <ctype.h>
#include "extra.h"

// Count the frequency of each vowel in a user-provided sentence
void count_vowel_frequency(const char* str) {
    int vowels[5] = {0};  // Indexes: 0 -> 'a', 1 -> 'e', 2 -> 'i', 3 -> 'o', 4 -> 'u'

    for (int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        switch (ch) {
            case 'a': vowels[0]++; break;
            case 'e': vowels[1]++; break;
            case 'i': vowels[2]++; break;
            case 'o': vowels[3]++; break;
            case 'u': vowels[4]++; break;
        }
    }

    printf("Vowel frequencies:\n");
    printf("a: %d\n", vowels[0]);
    printf("e: %d\n", vowels[1]);
    printf("i: %d\n", vowels[2]);
    printf("o: %d\n", vowels[3]);
    printf("u: %d\n", vowels[4]);
}

