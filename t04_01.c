// 12S24057 - Laura Awise Sirumapea
// 12S24024 - Yesika Nadia Saragih

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[61]; // Maksimum panjang 60 karakter + 1 untuk null terminator
    char message[21]; // Pesan akhir, cukup untuk 20 karakter + 1 untuk null terminator
    int length, i;

    // Membaca input dari stdin
    scanf("%60s", input);
    
    length = strlen(input);
    
    // Memastikan panjang input valid
    if (length < 3 || length > 60 || length % 3 != 0) {
        return 1; // Keluar jika panjang tidak valid
    }

    // Mengonversi setiap tiga karakter menjadi karakter ASCII
    for (i = 0; i < length; i += 3) {
        char temp[4]; // Buffer untuk menyimpan tiga karakter + null terminator
        strncpy(temp, input + i, 3);
        temp[3] = '\0'; // Menambahkan null terminator
        message[i / 3] = (char)atoi(temp); // Mengonversi ke integer dan ke karakter
    }
    
    message[i / 3] = '\0'; // Menambahkan null terminator di akhir pesan

    // Menampilkan pesan Icarus
    printf("%s\n", message);

    return 0;
}
