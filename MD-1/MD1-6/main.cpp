#include <iostream>

using namespace std;

int main()
{
    int ice, skin, gaji, banice, banskin, disice, disskin, total;
    cout << "HARGA ICE CREAM: ";
    cin >> ice;
    cout << "HARGA SKINCARE: ";
    cin >> skin;
    cout << "BANYAK ICE CREAM: ";
    cin >> banice;
    cout << "BANYAK SKINCARE: ";
    cin >> banskin;
    disice = ice*20/100;
    cout << "DISKON ICE CREAN: " <<disice<< endl;
    disskin = skin*10/100;
    cout << "DISKON SKIN CARE: " <<disskin<< endl;
    total = 1000000-(ice*banice-disice)-(skin*banskin-disskin);
    cout << "Total: " <<total<< endl;
    return 0;
}
