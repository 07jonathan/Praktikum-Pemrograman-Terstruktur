#include<stdio.h>
#include<string.h>
int main()
{
 char text1[50];
 char text2[30];
 char c1='o',c2='0',c3='i',c4='1',c5='e',c6='3',c7='a',c8='4',c9='u',c10='2';
 int i;
 int vokal=0;

 printf("Masukkan kata pertama  : ");
 gets(text1);
 for(i=0;i<strlen(text1);i++)
  {
    if(text1[i]==c1)
        text1[i]=c2;
    else if (text1[i]==c3)
        text1[i]=c4;
    else if (text1[i]==c5)
        text1[i]=c6;
    else if (text1[i]==c7)
        text1[i]=c8;
    else if (text1[i]==c9)
        text1[i]=c10;
 }

 printf("masukkan kata kedua    : ");
 gets(text2);
 fflush(stdin);
 printf("\n\n\n\n");
 for(i=0;i<strlen(text2);i++)
  {
    if (text2[i]=='a'||text2[i]=='A'||text2[i]=='i'||text2[i]=='I'||text2[i]=='u'||text2[i]=='U'||text2[i]=='e'||text2[i]=='E'||text2[i]=='o'||text2[i]=='O')
    {
      vokal++;
    }
  }

  printf("kata pertama setelah diubah           : %s \n", text1);
  printf("Jumlah huruf vokal pada kata kedua    : %d \n", vokal);
  return 0;
}
