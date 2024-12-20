/*
    Nama File      : MODUL6.c 
	Programmer     : lathifah ufaira
	Tgl. pembuatan : 9/11/24
	Deskripsi      : Menghitung Panjang String
*/

#include <stdio.h>
#include <string.h>
//Deklarasi Fungsi
int hitungPanjangString(char string []);
void judul();
int main (){

    judul();
    char string [20];

    printf("Masukkan String Yang Akan Di Hitung:");
    scanf("%s", string);

    int panjangString=hitungPanjangString(string);
    printf("Jumlah Karakter Dalam String Adalah: %d\n",panjangString );
    return 0;
}
int hitungPanjangString(char string []){
    return strlen(string);
}
void judul(){
    printf("===============================================\n");
    printf("|            Menghitung Panjang String        |\n");
    printf("|---------------------------------------------|\n");
    printf("| PROGRAMMER : LATHIFAH UFAIRA                |\n");
    printf("| NIM        : 24343095                       |\n");
    printf("===============================================\n");

}