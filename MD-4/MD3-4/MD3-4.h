#ifndef MD3-4_H_INCLUDED
#define MD3-4_H_INCLUDED
#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;
char hitung (int angka, int awal, int rata){
  if(awal >= angka+1){
    //pemberhentian rekursif
    cout<<"\n> Rata-rata       = "<<rata;
        return 32;

    }
    else{
        if(awal%2!=0)
        {

        cout<<awal;
        rata=rata+1;
        }
        else
            cout<<",";
        //melakukan rekursif
        hitung(angka,awal+1,rata);
    }

}


#endif // MD3-4_H_INCLUDED
