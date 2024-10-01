#include <stdio.h>
#include <string.h>

void printString(char sign, char *str) {
    if (sign == '+') {
        
        for (int i = 0; str[i] != '\0'; i++) {
            printf("%c", toupper(str[i]));
        }
    } else if (sign == '-') {
        
        for (int i = 0; str[i] != '\0'; i++) {
            printf("%c", tolower(str[i]));
        }
    } else {
        printf("Signo no válido. Use '+' para mayúsculas o '-' para minúsculas.\n");
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s [+,-]texto\n", argv[0]);
        return 1;
    }

    char *input = argv[1];
    char sign = input[0];
    char *comma = strchr(input, ',');

    if (comma == NULL || (sign != '+' && sign != '-')) {
        printf("Formato no válido. Debe usar '+' o '-' seguido de una coma y un string.\n");
        return 1;
    }

    char *text = comma + 1; 
    printString(sign, text);

    return 0;
}

// segunda parte

int main(int argc, char *argv[]) {
   
    if (argc == 1 || (argc - 1) % 3 != 0) {
        printf("error\n");
    } else {
        for (int i = 1; i < argc; i++) {
            
            int length = strlen(argv[i]);
            
            for (int j = length - 1; j >= 0; j--) {
                putchar(argv[i][j]);
            }
            
            putchar('\n');
        }
    }

    return 0;
}
