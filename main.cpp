/*File utama program CPP Calculator*/
#include <stdio.h>
#include "tambah.h"
#include "kurang.h"
#include "kali.h"
#include "bagi.h"

int main() {
    //kamus
    float A, B, Hasil;
    char  C;
    //algoritma
    printf("nilai pertama: ");
    scanf("%f", &A);
    printf("nilai kedua  : ");
    scanf("%f", &B);
    printf("Operasi: ( + - * / )");
    scanf("%c", &C);
    
    if (C=="+"){
        Hasil = tambah(A,B);
    }else if(C=="-"){
        Hasil = kurang(A,B);
    }else if(C=="*"){
        Hasil = kali(A,B);
    }else if(C=="/"){
        Hasil = bagi(A,B);
    }else{
        printf("input salah")
    }

    return 0;
}