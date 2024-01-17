#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
// uses the random function to print a random lowercase letter from the alphabet(26)
    char letter_one = 'a' + (random() % 26);


    return letter_one;
}