/* 	
    Nama File		: MODUL8.c
	Programmer		: LATHIFAH UFAIRA
	Tgl. pembuatan	: 15/11/24
	Deskripsi		: Program Membuat Struct
*/

#include <stdio.h>
#include <string.h>

//definisi tipe struct secara global
struct tanggal
{
    int hari, bulan, tahun;
};

struct mahasiswa
{
    char nama[30];
    int nim;
    struct tanggal tanggal_lahir;
};

// deklarasi variabel data_mahasiswa secara global
struct mahasiswa data_mahasiswa;

int main(){
    printf("   Modul 8 Fundamental Programming \n");
	printf("<====================================>\n");
	printf("|          Identitas diri            |\n");
	printf("|Nama   : LATHIFAH UFAIRA            |\n");
	printf("|Nim    : 24343095                   |\n");
	printf("|Matkul : Fundamental Programming    |\n");
	printf("|Dosen  : Vikri Aulia, S.Pd., M.Kom  |\n");
	printf("<====================================>\n\n");

    // mengisi data kedalam variabel struct data_mahasiswa
    strcpy(data_mahasiswa.nama, "LATHIFAH UFAIRA");
    data_mahasiswa.nim = 24343095;
    data_mahasiswa.tanggal_lahir.hari = 04;
    data_mahasiswa.tanggal_lahir.bulan = 02;
    data_mahasiswa.tanggal_lahir.tahun = 2005;

    // menampilkan data dalam struct data_mahasiswa
    printf("Nama Mahasiswa       : %s\n", data_mahasiswa.nama);
    printf("Nomer Induk Mahasiswa: %d\n", data_mahasiswa.nim);
    printf("Tanggal Lahir        : %d-%d-%d\n", data_mahasiswa.tanggal_lahir.hari,
           data_mahasiswa.tanggal_lahir.bulan,
           data_mahasiswa.tanggal_lahir.tahun);
    
    return 0;
}