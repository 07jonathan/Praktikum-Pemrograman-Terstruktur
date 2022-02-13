#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
    int i, j, n, tugas[10], uts[10], uas[10];
    char depan[100][100],belakang[100][100];
    int hasil[100];

    cout<<"Banyaknya Siswa = ";
    cin>>n;
    cout<<endl;

    for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<endl;
           cout<<"Nama Depan    :";
           cin>>depan[i];
           cout<<"Nama Belakang :";
           cin>>belakang[i];
           cout<<"Nilai Tugas   :";
           cin>>tugas[i];
           cout<<"Nilai UTS     :";
           cin>>uts[i];
           cout<<"Nilai UAS     :";
           cin>>uas[i];
           hasil[i] = (tugas[i]+uts[i]+uas[i])/3;
        }


    cout<<endl;

    for (j=0; j<n; j++)
       {
        cout<<"Nama         : "<<depan[j]<<" "<<belakang[j]<<endl;
        cout<<"Nilai Total  : "<<hasil[j]<<endl;
        if (hasil[j]>=80)
        cout<<"Grade        :"<<" A ";
        else if (hasil[j]>=70)
        cout<<"Grade        :"<<" B ";
        else if (hasil[j]>=59)
        cout<<"Grade        :"<<" C ";
        else if (hasil[j]>=50)
        cout<<"Grade        :"<<" D ";
        else if (hasil[j]<50)
        cout<<"Grade        :"<<" E ";
        cout<<endl;
       }
  getch();
  }
