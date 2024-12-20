/*
    Nama File      : MODUL5.c 
	Programmer     : lathifah Ufaira
	Tgl. pembuatan : 25/10/24
	Deskripsi      : Hitung Keliling Lingkaran (Fungsi yang menerima jari-jari lingkaran sebagai parameter, lalu mengembalikan kelilingnya).
*/

#include <stdio.h>

// Fungsi untuk menghitung keliling lingkaran
float hitungKelilingLingkaran(float jariJari) {
    return 2 * 3.14 * jariJari;
}

int main() {
     printf("MODUL5.1_B.c \n");
    printf("=======================================\n");
    printf("Nama  : Lathifah Ufaira \n");
    printf("NIM   : 24343095 \n");
    printf("Judul : Menghitung keliling lingkaran\n");
    printf("=======================================\n");
    printf("\n");

    float jariJari;

    // Memasukkan input
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Memanggil fungsi dan menampilkan hasil
    float keliling = hitungKelilingLingkaran(jariJari);
    printf("Keliling lingkaran adalah   : %.2f\n", keliling);

    return 0;
}
