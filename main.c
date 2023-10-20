#include <stdio.h>

int main(){
    
    int jumlahBilangan, i;
    double bilangan, total = 0;
    float absensi, tugas, uh, uts, nilaiakhir;
    printf ("\n MENENTUKAN NILAI AKHIR SISWA - PROGRAM C");
    printf("\n MASUKKAN NILAI ABSENSI = ");
    scanf("%f", &absensi);
    printf("\n MASUKKAN NILAI TUGAS = ");
    printf("Berapa banyak bilangan yang ingin Anda masukkan? ");
    scanf("%d", &jumlahBilangan);
        for (i = 0; i < jumlahBilangan; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%lf", &bilangan);
        total += tugas;
    printf("\n MASUKKAN NILAI UH = ");
    printf("Berapa banyak bilangan yang ingin Anda masukkan? ");
    scanf("%d", &jumlahBilangan);
        for (i = 0; i < jumlahBilangan; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%lf", &bilangan);
        total += uts;
    printf("\n MASUKKAN NILAI UTS = ");
    scanf("f", &uts);

    nilaiakhir(0.1 *  absensi)+(0.2 * tugas)+(0.3 * uh)+(0.4 * uts);
    }

    printf("Jumlah dari %d bilangan yang dimasukkan adalah: %lf\n", jumlahBilangan, total);
    printf ("\n NILAI AKHIR = %.2f\n", nilaiakhir);
    if (nilaiakhir>-80){ printf(" NILAI HURUF = A");

} else if (nilaiakhir>=70){ printf(" NILAI HURUF = B");

}

else if (nilaiakhir>=60){

printf (" NILAI HURUF = C");

}

else if (nilaiakhir>=50){

printf (" NILAI HURUF = D");

printf (" NILAI HURUF = E");

}

else {

}
return 0;
        }
}
