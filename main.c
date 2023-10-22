#include <stdio.h>

int main() {
    char jawab;

    do {
        int jumlahTugas = 0, jumlahUH = 0, i, j;
        double nilaiTugas, nilaiUH, totalTugas = 0, totalUH = 0;
        float uts, nilaiakhir;
        printf("\n|---------------------------------------|");
        printf("\n      MENENTUKAN NILAI AKHIR SISWA  ");
        printf("\n|---------------------------------------|");
        printf("\n");

        // Meminta input jumlah tugas dengan loop do-while
        do {
            printf("\nMASUKKAN NILAI TUGAS = ");
            printf("\nBerapa banyak nilai tugas yang ingin Anda masukkan? ");
            if (scanf("%d", &jumlahTugas) != 1 || jumlahTugas <= 0) {
                printf("Input jumlah tugas tidak valid. Harus berupa bilangan bulat positif.\n");
                while (getchar() != '\n'); // Membersihkan buffer input
                continue; // Kembali ke atas loop untuk mengulangi input
            }
        } while (jumlahTugas <= 0);

        i = 0;  // Inisialisasi i di sini
        do {
            printf("Masukkan nilai tugas ke-%d: ", i + 1);
            if (scanf("%lf", &nilaiTugas) == 1 && nilaiTugas > 0 && (int)nilaiTugas == nilaiTugas) {
                totalTugas += nilaiTugas / jumlahTugas;
                i++;
            } else {
                printf("Input tidak valid. Masukkan bilangan bulat pada nilai tugas ke-%d lagi.\n", i + 1);
                while (getchar() != '\n'); // Membersihkan buffer input
            }
        } while (i < jumlahTugas);

        // Meminta input jumlah UH dengan loop do-while
        do {
            printf("\nMASUKKAN NILAI UH = ");
            printf("\nBerapa banyak nilai UH yang ingin Anda masukkan? ");
            if (scanf("%d", &jumlahUH) != 1 || jumlahUH <= 0) {
                printf("Input jumlah UH tidak valid. Harus berupa bilangan bulat positif.\n");
                while (getchar() != '\n'); 
                continue;
            }
        } while (jumlahUH <= 0);

        j = 0;  
        do {
            printf("Masukkan nilai UH ke-%d: ", j + 1);
            if (scanf("%lf", &nilaiUH) == 1 && nilaiUH > 0 && (int)nilaiUH == nilaiUH) {
                totalUH += nilaiUH / jumlahUH;
                j++;
            } else {
                printf("Input tidak valid. Masukkan bilangan bulat pada nilai UH ke-%d lagi.\n", j + 1);
                while (getchar() != '\n'); 
            }
        } while (j < jumlahUH);

      // Meminta input UTS dengan loop do-while
      do {
          printf("MASUKKAN NILAI UTS = ");
          if (scanf("%f", &uts) == 1 && uts > 0 && (int)uts == uts) {
              break;
          }
          printf("Input tidak valid. Masukkan bilangan bulat pada nilai UTS.\n");
          while (getchar() != '\n');
      } while (1);


        // Menghitung nilai akhir dan menampilkan hasil
        nilaiakhir = (totalTugas + totalUH + uts) / 3;

        printf("\nNILAI AKHIR = %.2lf\n", nilaiakhir);

        if (nilaiakhir >= 90) {
            printf("NILAI HURUF = A\n");
        } else if (nilaiakhir >= 80) {
            printf("NILAI HURUF = B\n");
        } else if (nilaiakhir >= 70) {
            printf("NILAI HURUF = C\n");
        } else if (nilaiakhir >= 60) {
            printf("NILAI HURUF = D\n");
        } else {
            printf("NILAI HURUF = E\n");
        }

        printf("\n-----------------------------------------");
        printf("\n APAKAH ANDA INGIN MENGHITUNG NILAI LAGI?[y/t]");
        scanf(" %c", &jawab);

    } while (jawab == 'y' || jawab == 'Y');

    return 0;
}
