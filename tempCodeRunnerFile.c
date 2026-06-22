#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i, len = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char word[100];
    int j = 0;

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);

            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }

            j = 0;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word = %s\n", longest);
    printf("Length = %d\n", maxLen);

    return 0;
}