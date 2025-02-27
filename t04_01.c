// 12S24057 - Laura Awise Sirumapea
// 12S24024 - Yesika Nadia Saragih

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[61]; 
    char message[21]; 
    int length, i;

    scanf("%60s", input);
    
    length = strlen(input);
    
    if (length < 3 || length > 60 || length % 3 != 0) {
        return 1; 
    }

    for (i = 0; i < length; i += 3) {
        char temp[4]; 
        strncpy(temp, input + i, 3);
        temp[3] = '\0'; 
        message[i / 3] = (char)atoi(temp); 
    }
    
    message[i / 3] = '\0'; 

    printf("%s\n", message);

    return 0;
}
