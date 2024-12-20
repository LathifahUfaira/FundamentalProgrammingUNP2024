

/*NAMA FILE  : TUGAS1.C
  PROGRAMMER : LATHIFAH UFAIRA
  NIM        : 24343095
  DESKRIPSI  : Kalkulator Nilai Akhir Mahasiswa yang menghitung nilai akhir berdasarkan nilai tugas, nilai ujian tengah semester (UTS), dan ujian akhir semester (UAS)
*/

#include <stdio.h>

int main(){
    // Deklarasi variabel
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    int lulus;

    // Input nilai dari pengguna
    printf("Masukkan nilai Tugas (0-100): ");
    scanf("%f", &nilaiTugas);
    printf("Masukkan nilai UTS (0-100)  : ");
    scanf("%f", &nilaiUTS);
    printf("Masukkan nilai UAS (0-100)  : ");
    scanf("%f", &nilaiUAS);

    // Hitung nilai akhir
    nilaiAkhir = (0.3 * nilaiTugas) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);

    // Tentukan apakah lulus atau tidak
    lulus = (nilaiAkhir >= 60) && (nilaiUAS >= 50);

    // Output hasil
    printf("\nNilai Akhir Anda: %.2f\n", nilaiAkhir);

    if (lulus) {
        printf("Selamat! Anda LULUS.\n");
    } else {
        printf("Maaf, Anda TIDAK LULUS.\n");
    }

    return 0;
}