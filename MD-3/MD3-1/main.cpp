#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

char k[1000];
char k2[1000];
int count;
using namespace std;
int main()
{
        cout<< "\nInputkan kalimat : ";
        gets(k);
        strlwr(k);
        strcpy(k2,k);
        cout<< "Hasil : ";
        for (char i=0; i<=1000; i++){
            if (k[i]== '\0')
            {
                break;
            }
            else {
                switch (k[i]){
                case 'c': {printf("tj");}break;
                case 'j': {printf("dj");}break;
                case 'u': {printf("oe");}break;
                case 'y': {printf("j");}break;
                case ' ': {printf(" ");}break;
                }
            }
        }

	getch();
}
