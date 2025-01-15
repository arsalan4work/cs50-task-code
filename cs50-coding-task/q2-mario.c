#include <stdio.h>

int main() {
    int height;
    char symbol;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);
    printf("Enter a character to build the pyramid: ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) printf(" ");
        for (int j = 0; j < i; j++) printf("%c", symbol);
        printf("\n");
    }
    return 0;
}
