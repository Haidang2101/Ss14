#include <stdio.h>

int main() {
    char str[] = "ytuD fO llaC"; 
    for (int i = sizeof(str)-1; i >= 0; i--) {
        printf("%c ", str[i]);  
    }

    return 0;
}
