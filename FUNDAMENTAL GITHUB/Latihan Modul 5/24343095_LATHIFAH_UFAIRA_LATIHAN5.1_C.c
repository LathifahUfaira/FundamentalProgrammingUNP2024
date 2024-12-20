/*
    Nama File      : MODUL5.c 
	Programmer     : lathifah Ufaira
	Tgl. pembuatan : 25/10/24
	Deskripsi      : Menghitung faktorial
*/



#include <stdio.h>

// Fungsi untuk menghitung faktorial secara rekursif
int hitungFaktorial(int n) {
    // Basis rekursi: faktorial dari 0 dan 1 adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Rekursi: n! = n * (n-1)!
        return n * hitungFaktorial(n - 1);
    }
}

int main() {
    
    printf("MODUL5.1_C.c \n");
    printf("=================================\n");
    printf("Nama  : Lathifah Ufaira \n");
    printf("NIM   : 24343095 \n");
    printf("Judul : Menghitung faktorial\n");
    printf("=================================\n");
    printf("\n");

    int n;

    // Memasukkan input 
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);

    //Memanggil fungsi dan menampilkan hasil
    int faktorial = hitungFaktorial(n);
    printf("Faktorial dari %d adalah: %d\n", n, faktorial);

    return 0;
}
