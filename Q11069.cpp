#include <iostream>


using namespace std;

int main(){
	int f[80];
	f[1]=1;
	f[2]=2;
	f[3]=2;
	for(int i=4;i<80;i++)
		f[i]=f[i-2]+f[i-3];


	int n;	
	while(cin >>n)
		cout <<f[n]<<endl;
 return 0;
 
}
