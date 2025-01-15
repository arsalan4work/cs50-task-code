#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char temp[100];
    printf("Enter a string: ");
    scanf("%s", temp);

    char *str = malloc(strlen(temp) + 1);
    strcpy(str, temp);

    printf("You entered: %s\n", str);
    free(str);

    return 0;
}
