#ifndef MD4-3_H_INCLUDED
#define MD4-3_H_INCLUDED

#include <iostream>

using namespace std;
char faktorial(int bil,int hasil){
    if(hasil >= bil+1){
    //pemberhentian rekursif
        return 32;

    }
    else{
        cout<<hasil;
        if(hasil != bil)
            cout<<"";
        //melakukan rekursif
        faktorial(bil,hasil+1);
    }

}
#endif // MD4-3_H_INCLUDED
