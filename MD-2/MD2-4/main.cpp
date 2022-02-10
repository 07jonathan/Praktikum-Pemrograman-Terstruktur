#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "masukkan nilai n: ";cin>>n;
    for (int B=1; B<=n; B++)
    {
        cout <<B<<" ";
    }
    cout<<"\n";
    for (int C=2; C<=n; C++)
    {
        cout<<C<<" ";
        for (int D=1; D<n; D++)
        {
            cout <<"* ";
        }
        cout <<"\n";
    }
    return 0;
}
