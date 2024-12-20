/* 
	Nama File		: PJBL.c
	Programmer		: LATHIFAH UFAIRA
	Tgl. pembuatan	: 26/11/2024
	Deskripsi		: Kalkulator Sederhana
*/

#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menampilkan identitas program
    void judul() {
    printf("===============================================\n");
    printf("|               KALKULATOR SEDERHANA          |\n");
    printf("|---------------------------------------------|\n");
    printf("| PROGRAMMER : LATHIFAH UFAIRA                |\n");
    printf("| NIM        : 24343095                       |\n");
    printf("===============================================\n");
}
int main() {
    float angka1, angka2, hasil;
    int operator;
    char lanjut;

    do {
        printf("\n=== Kalkulator Sederhana ===\n");
        printf("1. Penjumlahan (+)\n");
        printf("2. Pengurangan (-)\n");
        printf("3. Perkalian   (*)\n");
        printf("4. Pembagian   (/)\n");

        printf("Masukkan angka pertama: ");
        scanf("%f", &angka1);
        printf("Masukkan angka kedua: ");
        scanf("%f", &angka2);
        
        printf("Pilih operasi (1-4): ");
        scanf("%d", &operator);

        if (operator == 1) {
            hasil = angka1 + angka2;
            printf("Hasil: %.4f\n", hasil);
        } else if (operator == 2) {
            hasil = angka1 - angka2;
            printf("Hasil: %.4f\n", hasil);
        } else if (operator == 3) {
            hasil = angka1 * angka2;
            printf("Hasil: %.4f\n", hasil);
        } else if (operator == 4) {
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                printf("Hasil: %.4f\n", hasil);
            } else {
                printf("Hasil tidak terdefinisi\n");
            }

        } else {
            printf("Operasi tidak valid.\n");
        }

        printf("Apakah Anda ingin melakukan operasi lain? (y/n): ");
        scanf(" %c", &lanjut);
    } while (lanjut == 'y' || lanjut == 'Y');

    printf("Terima kasih!\n");
    return 0;
}