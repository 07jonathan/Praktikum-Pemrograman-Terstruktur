#include<stdio.h>
#include<string.h>
int main()
{
 char text1_07282[50];
 char text2_07282[30];
 char c1_07282='o',c2_07282='0',c3_07282='i',c4_07282='1',c5_07282='e',c6_07282='3',c7_07282='a',c8_07282='4',c9_07282='u',c10_07282='2';
 int i_07282;
 int vokal_07282=0;

 printf("Masukkan kata pertama  : ");
 gets(text1_07282);
 for(i_07282=0;i_07282<strlen(text1_07282);i_07282++)
  {
    if(text1_07282[i_07282]==c1_07282)
        text1_07282[i_07282]=c2_07282;
    else if (text1_07282[i_07282]==c3_07282)
        text1_07282[i_07282]=c4_07282;
    else if (text1_07282[i_07282]==c5_07282)
        text1_07282[i_07282]=c6_07282;
    else if (text1_07282[i_07282]==c7_07282)
        text1_07282[i_07282]=c8_07282;
    else if (text1_07282[i_07282]==c9_07282)
        text1_07282[i_07282]=c10_07282;
 }

 printf("masukkan kata kedua    : ");
 gets(text2_07282);
 fflush(stdin);
 printf("\n\n\n\n");
 for(i_07282=0;i_07282<strlen(text2_07282);i_07282++)
  {
    if (text2_07282[i_07282]=='a'||text2_07282[i_07282]=='A'||text2_07282[i_07282]=='i'||text2_07282[i_07282]=='I'||text2_07282[i_07282]=='u'||text2_07282[i_07282]=='U'||text2_07282[i_07282]=='e'||text2_07282[i_07282]=='E'||text2_07282[i_07282]=='o'||text2_07282[i_07282]=='O')
    {
      vokal_07282++;
    }
  }

  printf("kata pertama setelah diubah           : %s \n", text1_07282);
  printf("Jumlah huruf vokal pada kata kedua    : %d \n", vokal_07282);
  return 0;
}
