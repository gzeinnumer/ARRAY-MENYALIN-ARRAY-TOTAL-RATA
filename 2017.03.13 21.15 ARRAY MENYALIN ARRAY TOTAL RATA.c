/*
nama    : M Fadli Zein
Nobp    : 1601081035
Kelas   : TK1B
Np      : Array Dasar
*/

#include"stdio.h"
void main()
{
    int A[100],B[100];
    int jum,i,n;
    float rata;
    jum=0;
    printf("Masukan Ukuran : ");scanf("%d",&n);
    printf("\nNilai A :\n");
    for(i=0; i<n; i++)
    {
        printf("Masukan Nilai A Ke-%d : ",i+1); scanf("%d",&A[i]);
        jum=jum+A[i];
    }
    for(i=0; i<n; i++)
    {
        B[i]=A[i];/*penyalinan*/
    }
    printf("\nHasil Nilai B\n");
    for(i=0; i<n; i++)
    {
        printf("Nilai B Ke-%d : %d\n",i+1,B[i]);
    }
    rata=jum/n;
    printf("\nHasil Pengolahan\n");
    printf("Total Nilai : %d\n",jum);
    printf("Rata-Rata   : %.2f",rata);
}
