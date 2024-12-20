/* 
	Nama File		: PJBL.c
	Programmer		: LATHIFAH UFAIRA
	Tgl. pembuatan	: 26/11/2024
	Deskripsi		: Kalkulator Sederhana (New)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // Menambahkan library time.h

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
    judul();
    FILE *inputFile, *outputFile;
    double num1, num2, result;
    char operator;
    int choice;
    int validOperation;
    clock_t start_time, end_time;  // Variabel untuk menyimpan waktu mulai dan selesai
    double execution_time;  // Untuk menyimpan waktu eksekusi dalam detik

    // Membuka file output untuk menulis hasil operasi
    outputFile = fopen("output_1.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Tidak dapat membuka file output_1.txt\n");
        return 1;
    }

    // Menyimpan waktu mulai eksekusi program
    start_time = clock();

    // Menu pilihan operasi
    while (1) {
        printf("Pilih operasi:\n");
        printf("1. Operasi dari file input_1.txt\n");
        printf("2. Operasi input manual\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Membaca operasi dari file input_1.txt
            inputFile = fopen("input_1.txt", "r");
            if (inputFile == NULL) {
                printf("Error: Tidak dapat membuka file input_1.txt\n");
                fclose(outputFile);
                return 1;
            }

            // Membaca operasi dari file
            while (fscanf(inputFile, "%lf %c %lf", &num1, &operator, &num2) == 3) {
                validOperation = 1;

                // Memeriksa operator dan melakukan operasi
                switch (operator) {
                    case '+':
                        result = num1 + num2;
                        break;
                    case '-':
                        result = num1 - num2;
                        break;
                    case '*':
                        result = num1 * num2;
                        break;
                    case '/':
                        if (num2 != 0) {
                            result = num1 / num2;
                        } else {
                            fprintf(outputFile, "Error: Pembagian dengan nol (%.4lf / %.4lf)\n", num1, num2);
                            validOperation = 0;
                        }
                        break;
                    default:
                        validOperation = 0;
                        break;
                }

                // Jika operasi valid, tuliskan hasil ke output_1.txt
                if (validOperation) {
                    fprintf(outputFile, "%.4lf %c %.4lf = %.4lf\n", num1, operator, num2, result);
                } else {
                    fprintf(outputFile, "Error: Operator tidak valid untuk operasi (%.4lf %c %.4lf)\n", num1, operator, num2);
                }
            }

            fclose(inputFile); // Tutup file input setelah selesai
            printf("Hasil operasi dari input.txt telah ditulis ke output_1.txt.\n");

        }

        else if (choice == 2) {
            // Operasi manual (input langsung dari pengguna)
            printf("Masukkan angka pertama: ");
            scanf("%lf", &num1);
            printf("Masukkan operator (+, -, *, /): ");
            scanf(" %c", &operator); // Spasi sebelum %c untuk membersihkan buffer
            printf("Masukkan angka kedua: ");
            scanf("%lf", &num2);

            validOperation = 1;

            // Memeriksa operator dan melakukan operasi
            switch (operator) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 != 0) {
                        result = num1 / num2;
                    } else {
                        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
                        validOperation = 0;
                    }
                    break;
                default:
                    printf("Error: Operator tidak valid.\n");
                    validOperation = 0;
                    break;
            }

            // Jika operasi valid, tampilkan hasil di terminal
            if (validOperation) {
                printf("%.4lf %c %.4lf = %.4lf\n", num1, operator, num2, result);
            }
        }

        else if (choice == 3) {
            printf("Keluar dari program.\n");
            fclose(outputFile); // Tutup file output sebelum keluar

            // Menyimpan waktu selesai eksekusi program
            end_time = clock();

            // Menghitung waktu eksekusi dalam detik
            execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
            printf("Waktu eksekusi: %.4f detik\n", execution_time);

            return 0;
        }

        else {
            printf("Pilihan tidak valid.\n");
        }

        // Menanyakan apakah pengguna ingin melanjutkan atau keluar
        char continueChoice;
        printf("\nApakah Anda ingin melanjutkan? (y/n): ");
        scanf(" %c", &continueChoice); // Spasi untuk membersihkan buffer

        if (continueChoice == 'n' || continueChoice == 'N') {
            printf("Keluar dari program.\n");
            fclose(outputFile); // Tutup file output sebelum keluar

            // Menyimpan waktu selesai eksekusi program
            end_time = clock();

            // Menghitung waktu eksekusi dalam detik
            execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
            printf("Waktu eksekusi: %.4f detik\n", execution_time);

            break;
        }
    }

    return 0;
}