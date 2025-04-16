#include <stdio.h>

int main(int argc, char** argv) {
    char str[80];
    int a; 
    scanf("%80s", str);
    
    for (a = 0; str[a] != '\0'; a++) { 
        if (str[a] == 'a') {
            str[a] = 'A';
        }
        if (str[a] == 'b') {
            str[a] = 'B';
        }
        if (str[a] == '.') {
            str[a] = '!';
        }
    }
    
    printf("%s", str);
    return 0;
}
