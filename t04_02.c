// 12S24057 - Laura Awise Sirumapea
// 12S24024 - Yesika Nadia Saragih

#include <stdio.h>
#include <string.h>

int main() {
    char input[21]; 
    int length, i;

    fgets(input, sizeof(input), stdin);
    
    // Menghapus newline jika ada
    length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--;
    }

    
    if (length < 1 || length > 20) {
        return 1; 
    }

    for (i = 0; i < length; i++) {
        printf("%03d", (int)input[i]); 
    }

    printf("013\n"); 
    return 0;
}

