#include <iostream>

using namespace std;

int main()
{
    int bulan, gaji, tunjangan, pajak, bpjs, total;
    cout << "MASUKKAN JUMLAH BULAN YANG INGIN DIBAYAR: ";
    cin >> bulan;
    gaji = bulan*1200000;
    cout << "GAJI POKOK: " <<gaji<< endl;
    tunjangan = 30000*bulan;
    cout << "TUNJANGAN: " <<tunjangan<< endl;
    pajak = bulan*60000;
    cout << "PAJAK: " <<pajak<< endl;
    bpjs = bulan*60000;
    cout << "BPJS: " <<bpjs<< endl;
    total = gaji+tunjangan-pajak-bpjs;
    cout << "Total: " <<total<< endl;
    return 0;
}
