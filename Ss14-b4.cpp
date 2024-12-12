#include <stdio.h>

int main() {
    char str[] = "Hello bro, do you want to play the game?"; 
    char ch;
    int count = 0;
    printf("Nhap mot ky tu: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);
    
    return 0;
}

