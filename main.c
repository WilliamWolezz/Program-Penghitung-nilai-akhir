#include <stdio.h>

int main() 
{
    char jawab;
    float absensi, tugas, uh, uts, nilaiakhir;

    do {
        int jumlahBilangan = 0, i;
        double bilangan, totalTugas = 0, totalUH = 0;

        printf("\n|-----------------------------------|");
        printf("\n| MENENTUKAN NILAI AKHIR SISWA - C  |");
        printf("\n|-----------------------------------|");
        printf("\n");
        printf("\nMASUKKAN NILAI TUGAS = ");

        printf("\nBerapa banyak nilai tugas yang ingin Anda masukkan? ");
        scanf("%d", &jumlahBilangan);

        for (i = 0; i < jumlahBilangan; i++) {
            printf("Masukkan nilai tugas ke-%d: ", i + 1);
            // Loop untuk memastikan input adalah float
            while (scanf("%lf", &bilangan) != 1) {
                printf("\nInput tidak valid. \nMasukkan nilai tugas ke-%d lagi: ", i + 1);
                while (getchar() != '\n'); // Membersihkan buffer input
            }
            totalTugas += bilangan / jumlahBilangan;
        }

        printf("\n ");
        printf("\nMASUKKAN NILAI UH = ");
        printf("\nBerapa banyak nilai UH yang ingin Anda masukkan? ");
        scanf("%d", &jumlahBilangan);

        for (i = 0; i < jumlahBilangan; i++) {
            printf("Masukkan nilai UH ke-%d: ", i + 1);
            while (scanf("%lf", &bilangan) != 1) {
                printf("\nInput tidak valid. \nMasukkan nilai UH ke-%d lagi: ", i + 1);
                while (getchar() != '\n'); 
            }
            totalUH += bilangan / jumlahBilangan;
        }

        printf("\n ");
        printf("\nMASUKKAN NILAI UTS = ");
        while (scanf("%f", &uts) != 1) {
            printf("\nInput tidak valid. \nMasukkan nilai UTS lagi: ");
            while (getchar() != '\n'); 
        }

        nilaiakhir = (totalTugas + totalUH + uts) / 3;

        printf("\n ");
        printf("\nNILAI AKHIR = %.2lf\n", nilaiakhir);

        if (nilaiakhir >= 80) {
            printf("NILAI HURUF = A\n");
        }
        else if (nilaiakhir >= 70) {
            printf("NILAI HURUF = B\n");
        }
        else if (nilaiakhir >= 60) {
            printf("NILAI HURUF = C\n");
        }
        else if (nilaiakhir >= 50) {
            printf("NILAI HURUF = D\n");
        }
        else {
            printf("NILAI HURUF = E\n");
        }

        printf("\n-----------------------------------------");
        printf("\n APAKAH ANDA INGIN MENGHITUNG NILAI LAGI?[y/t]");
        scanf(" %c", &jawab);

    } while (jawab == 'y' || jawab == 'Y');

    return 0;
}
