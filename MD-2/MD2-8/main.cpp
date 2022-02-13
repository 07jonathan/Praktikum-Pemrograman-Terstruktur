#include <iostream>
using namespace std;
main(){
	int i,j;
	int input;
	char huruf = 'A';

	cout<<"input = ";cin>>input;
	for (i = 0; i < input; i++)
	{
		if (input%2 != 0)
		{
			for(j=0;j<input;j++){
				if (i == i-j)
				{
					cout<<i+2<<" ";
				}else{
					cout<<huruf<<" ";
					huruf++;
				}
			}
			cout<<endl;
		}else{
			for(j=0;j<input;j++)
			{
				if(i==j)
				{
					cout<<i+2<<" ";
				}else{
					cout<<huruf<<" ";
					huruf++;
				}
			}
			cout<<endl;
		}
	}
}
