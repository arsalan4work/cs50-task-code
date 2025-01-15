#include <stdio.h>

int countOccurrences(char str[], char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) count++;
    }
    return count;
}

int main() {
    char str[100], c;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the character to count: ");
    scanf(" %c", &c);
    printf("Occurrences of '%c': %d\n", c, countOccurrences(str, c));
    return 0;
}
