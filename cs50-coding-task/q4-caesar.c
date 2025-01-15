#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int key;
    printf("Enter a name: ");
    scanf("%s", str);
    printf("Enter the shift key and type: ");
    scanf("%d", &key);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char base = islower(str[i]) ? 'a' : 'A';
            str[i] = (str[i] - base + key) % 26 + base;
        }
    }

    printf("Encrypted string: %s\n", str);
    return 0;
}
