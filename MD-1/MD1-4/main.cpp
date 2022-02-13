#include <stdio.h>
#include <conio.h>

main(){

   int bulan, hasil, denda;

   printf(" MASUKKAN JUMLAH BULAN YANG TELAT DIBAYAR: ");
   scanf("%i",&bulan);
   denda = bulan*120000;
   printf(" DENDA ANDA TELAT MEMBAYAR : %i\n",denda);
   hasil = bulan*1200000+denda;
   printf(" HASIL JUMLAH PEMBAYARAN   : %i",hasil);
   return 0;

}
