#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void passwordGenerator(int N) {
    int i = 0;
    int randomizer = 0;

    srand((unsigned int) (time(NULL)));

    char numbers[] = "01234567890";
    char letterUppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letterLowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char symbols[] = "!@#$%^&*0";
    char password[N];

    randomizer = rand() % 4;

    for (i = 0; i < N; i++) {
        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = letterUppercase[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = letterLowercase[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
}

    int main()
    {
        int N;

        printf("enter size of password:\n");
        scanf("%d", &N);
        passwordGenerator(N);
        return 0;
    }
