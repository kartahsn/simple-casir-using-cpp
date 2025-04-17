#include <stdio.h>
#include <stdlib.h>

int main() {
    int select, money, qty, total, cashback;
    char ulang = 'y';

    while (ulang == 'y' || ulang == 'Y') {
        // Membersihkan layar
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        // Menampilkan menu
        printf("\tMENU\n=====================\n");
        printf("1. Ayam   (Rp12.000)\n");
        printf("2. Sate   (Rp15.000)\n");
        printf("3. Dadar  (Rp10.000)\n");
        printf("=====================\n");
        printf("Silahkan pilih menu anda [1-3]: ");
        scanf("%d", &select);

        // Validasi pilihan menu
        if (select >= 1 && select <= 3) {
            printf("Jumlah porsi yang dibeli: ");
            scanf("%d", &qty);
            printf("Masukkan jumlah uang pelanggan: ");
            scanf("%d", &money);

            // Menentukan harga
            if (select == 1) {
                total = 12000 * qty;
            } else if (select == 2) {
                total = 15000 * qty;
            } else {
                total = 10000 * qty;
            }

            // Menampilkan hasil
            cashback = money - total;
            printf("\n=====================\n");
            printf("Total yang harus dibayar = Rp%d\n", total);

            if (cashback >= 0) {
                printf("Uang kembalian           = Rp%d\n", cashback);
            } else {
                printf("Uang anda kurang sebesar = Rp%d\n", -cashback);
            }
        } else {
            printf("\nMenu tidak tersedia! Silakan pilih antara 1 sampai 3.\n");
        }

        // Menanyakan pengulangan
        printf("\nIngin transaksi lagi? [y/n]: ");
        scanf(" %c", &ulang); // Spasi penting untuk menangkap input karakter baru
    }

    printf("\nTerima kasih telah menggunakan program kasir!\n");
    return 0;
}
