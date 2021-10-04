#include <stdio.h>
#include <conio.h>
#include <string.h>

char* reverse(char*);

main() {
    char str[80];
    char* str_ptr;
    clrscr();
    printf("Enter string : ");
    gets(str);
    str_ptr = reverse(str);
    printf("Reverse string is ");
    puts(str_ptr);
    getch();
}

char* reverse(char* string) {
    char ch;
    int x, y;
    for (x = 0, y = strlen(string) - 1; x < y; x++, y--) {
        ch = *(string + y);
        *(string + y) = *(string + x);
        *(string + x) = ch;
    }
    return string;
}