#include <iostream>
#include "MD4-3.h"
using namespace std;


int main(){
    int bil,akhir=1,ulang;
    cout<<"Faktorial dengan rekursif"<<endl;

    cout<<"> Input Banyak Perulangan : ";cin>>ulang;
    cout<<"> Input Angka             : ";cin>>bil;
    cout<<"> Output                  : "<<endl;
    for (int i=0; i<ulang;i++){
    cout<<faktorial(bil,akhir)<<endl;
    }
}
