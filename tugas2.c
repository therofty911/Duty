#include<stdio.h>

#include<string.h>

 

char pilihan, lanjut;

int m, n;

        int matriks1[10][10], matriks2[10][10];

        int jumlah[10][10];

        int transposin[10][10];

        int kali[10][10];

int A[10][10],i,j,determinan;

typedef int matriks22 [2][2];

        matriks22 a,b,c;

        int i,j;

 

void baca_matriks(int mat[10][10], int baris, int kolom){

    int i, j;

    for( i =1;i<=baris; i++){

        for(j=1;j<=kolom;j++){

            printf("Data [%d,%d] = ", i,j);

            scanf("%d", &mat[i][j]);

        }

    }

}

 

void matriks_jumlah(const int matriks[10][10], const int matriks2[10][10], int baris, int kolom, int jumlah [10][10]){

    int i, j;

    for(i = 1;i<=baris; i++){

        for(j = 0;j<=kolom;j++){

            jumlah [i][j] = matriks[i][j] + matriks2[i][j];

        }

    }

}

 

void cetak_matriks(const int A[10][10], int baris, int kolom){

    int i,j;

    printf("\n");

    for(i = 1;i<=baris;i++){

        for(j = 1;j<=kolom;j++){

            printf("%d ", A[i][j]);

        }

        printf("\n");

    }

}

 

void matriks_transposin(const int matriks[10][10], const int matriks2[10][10], int baris, int kolom, int transposin [10][10]){

    int i, j;
    for (i = 0; i < m; i ++){
    for(j = 0; j < n; j++){
      transposin[j][i] = matriks[i][j];
    }
  }


}

 

void matriks_kali(const int matriks[10][10], const int matriks2[10][10], int baris, int kolom, int kali[10][10]){

    int i, j;

    for(i = 1;i<=baris; i++){

        for(j = 0;j<=kolom;j++){

            kali[i][j] = matriks[i][j] * matriks2[i][j];

        }

    }

}

 

 

//Program Utama

int main(){

 

do{

printf("\n------------------------------------------------");

printf("\n|  Created By Habibie Ed Dien & Rahmat Hidayat |");

printf("\n------------------------------------------------\n");

//Memasukkan Pilihan user

printf("\nSilahkan Pilih Menu :\n");

printf("\n1.Perkalian Matriks");

printf("\n2.transpose Matriks");

printf("\n3.Penjumlahan Matriks");

printf("\n4.Keluar\n");

printf("\nMasukkan pilihan : "); scanf("%d", &pilihan);

 

switch(pilihan){

case 1 :

        printf("Banyak Baris = ");scanf("%d", &m);

        printf("Banyak Kolom = ");scanf("%d", &n);

        printf("\n\n=================\n");

        printf("Data matriks ke-1 \n");

        baca_matriks(matriks1,m,n);

        cetak_matriks(matriks1,m,n);

        printf("\n\n=================\n");

        printf("Data matriks ke-2 \n");

        baca_matriks(matriks2, m, n);

        cetak_matriks(matriks2, m, n);

        matriks_kali(matriks1, matriks2, m, n, jumlah);

        printf("Hasil Perkalian : \n");

        cetak_matriks(kali,m,n);

 

        break;

case 2 :

        printf("Banyak Baris = ");scanf("%d", &m);

        printf("Banyak Kolom = ");scanf("%d", &n);

        printf("\n\n=================\n");

        printf("Data matriks ke-1 \n");

        baca_matriks(matriks1,m,n);

        cetak_matriks(matriks1,m,n);

        printf("\n\n=================\n");

        printf("Data matriks ke-2 \n");

        baca_matriks(matriks2, m, n);

        cetak_matriks(matriks2, m, n);

        matriks_jumlah(matriks1, matriks2, m, n, transposin);

        printf("Hasil Penjumlahan : \n");

        cetak_matriks(jumlah,m,n);

 

        break;

case 3 :

    printf("Banyak Baris = ");

    scanf("%d", &m);

    printf("Banyak Kolom = ");

    scanf("%d", &n);

    printf("\n\n=================\n");

    printf("Data matriks ke-1 \n");

    baca_matriks(matriks1,m,n);

    cetak_matriks(matriks1,m,n);

    printf("\n\n=================\n");

    printf("Data matriks ke-2 \n");

    baca_matriks(matriks2, m, n);

    cetak_matriks(matriks2, m, n);

    matriks_transposin(matriks1, matriks2, m, n, kali);

    printf("Hasil Transpose");

    cetak_matriks(transposin,m,n);

 

        break;

case 4 :
  exit(0);

break;

default: printf("\nMaaf, pilihan tidak tersedia..!"); break;

    }

printf("\nMau coba lagi(Y/N)? "); scanf("%s", &lanjut);

    }while((lanjut=='y')||(lanjut=='Y'));

 

 

return 0;

}