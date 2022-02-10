#include <iostream>
using namespace std;
int main()
{
    int n,A, B, C, D;
    cout << "masukkan nilai n: ";
    cin>>n;
    A=n;

    do
    {
        for (B=1; B<=n-A;B++)
        {
            cout <<" ";
        }


        for (C=1; C<=A; C++)
        {

            if (B%2!=0){

            cout<<B;
            }
            else
            cout <<"*";
        }
        cout<<"\n";

        A--;
    }while (A!=0);
 return 0;
}
