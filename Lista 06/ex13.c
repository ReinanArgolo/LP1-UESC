#include <stdio.h>

int comparaStrings(const char *str1, const char *str2);
int comprimento(const char *str);
int ehSubstring(const char *str1, const char *str2);

int main(void) {
    char palavra1[100], palavra2[100];

    printf("Digite a primeira palavra: ");
    fgets(palavra1, 100, stdin);
    palavra1[comprimento(palavra1) - 1] = '\0'; // Remove newline character

    printf("Digite a segunda palavra: ");
    fgets(palavra2, 100, stdin);
    palavra2[comprimento(palavra2) - 1] = '\0'; // Remove newline character

    if (comparaStrings(palavra1, palavra2)) {
        printf("As palavras são iguais.\n");
    } else {
        printf("As palavras são diferentes.\n");

        int len1 = comprimento(palavra1);
        int len2 = comprimento(palavra2);

        if (len1 > len2) {
            printf("A primeira palavra é maior.\n");
        } else if (len2 > len1) {
            printf("A segunda palavra é maior.\n");
        } else {
            printf("As palavras têm o mesmo comprimento.\n");
        }

        if (ehSubstring(palavra1, palavra2)) {
            printf("A segunda palavra é uma substring da primeira.\n");
        } else {
            printf("A segunda palavra não é uma substring da primeira.\n");
        }
    }

    return 0;
}

int comparaStrings(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 == *(unsigned char *)str2;
}

int comprimento(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int ehSubstring(const char *str1, const char *str2) {
    int len1 = comprimento(str1);
    int len2 = comprimento(str2);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1;
        }
    }
    return 0;
}