#include <stdio.h>
int main() {
    char ch, choice;
    int vowels = 0, consonants = 0;
    do {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32; // 'A' -> 'a', 'B' -> 'b', etc.
            }
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
                printf("It is a vowel.\n");
            } else {
                consonants++;
                printf("It is a consonant.\n");
            }
        } else {
            printf("Not a letter, ignored.\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("\nYou entered %d vowels and %d consonants.\n", vowels, consonants);
}
