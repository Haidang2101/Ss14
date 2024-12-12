#include <stdio.h>

int main() {
    char str[] = "God Of War"; 
    for (int i = 0; i < sizeof(str); i++) {
        printf("%c ", str[i]);  
    }

    return 0;
}

