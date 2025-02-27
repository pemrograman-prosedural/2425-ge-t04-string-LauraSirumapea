// 12S24057 - Laura Awise Sirumapea
// 12S24024 - Yesika Nadia Saragih

#include <stdio.h>
#include <string.h>

int main() {
    char input[21]; // Maksimum panjang 20 karakter + 1 untuk null terminator
    int length, i;

    // Membaca input dari stdin
    fgets(input, sizeof(input), stdin);
    
    // Menghapus newline jika ada
    length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--; // Mengurangi panjang karena kita menghapus newline
    }

    
    if (length < 1 || length > 20) {
        return 1; // Keluar jika panjang tidak valid
    }

    // Mengonversi setiap karakter menjadi nilai ASCII dalam tiga digit
    for (i = 0; i < length; i++) {
        printf("%03d", (int)input[i]); // Mencetak nilai ASCII dalam tiga digit
    }

    printf("\n"); // Menambahkan newline di akhir output
    return 0;
}
