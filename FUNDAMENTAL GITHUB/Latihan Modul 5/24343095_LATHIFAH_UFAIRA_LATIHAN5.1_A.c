/*
    Nama File      : MODUL5.c 
	Programmer     : lathifah Ufaira
	Tgl. pembuatan : 25/10/24
	Deskripsi      : Penggunaan Parameter dalam Fungsi, Pengembalian Nilai (Return Value), dan Rekursif
*/
 #include <stdio.h>

// Deklarasi fungsi untuk menghitung luas persegi panjang
int hitungLuasPersegiPanjang(int panjang, int lebar) {
    return panjang * lebar;
}

int main() {

    printf("MODUL5.1_A.c \n");
    printf("=======================================\n");
    printf("Nama  : Lathifah Ufaira \n");
    printf("NIM   : 24343095 \n");
    printf("Judul : Menghitung luas persegi panjang\n");
    printf("=======================================\n");
    printf("\n");

    int panjang, lebar, luas;

    // Memasukkan input
    printf("Masukkan panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar  : ");
    scanf("%d", &lebar);

    // Memanggil fungsi dan menampilkan hasil
    luas = hitungLuasPersegiPanjang(panjang, lebar);
    printf("Luas persegi panjang adalah: %d\n", luas);

    return 0;
}
