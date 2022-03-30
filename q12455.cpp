#include <iostream>

using namespace std;


int main(){
    
    int n,b[21],f[50010];
    cin >>n;
	while(n--){
		int c,d;
		cin >>c>>d;
		for(int i=1;i<=d;i++)
			cin >>b[i];
		for(int i=0; i<=c; i++) 
			f[i]=0; 
		for(int i=1;i<=d;i++)
			for(int j=c;j-b[i]>=0;j--)
 				if(f[j]<f[j-b[i]]+b[i])
  					f[j]=f[j-b[i]]+b[i];


	if(f[c]==c)
	cout <<"YES"<<endl;
	else
	cout <<"NO"<<endl;
    
}
    
}
