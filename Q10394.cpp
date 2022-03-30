#include <iostream>

using namespace std;

bool prime[20000001];
int f[1000001][2];

int main(){ 
	for(int i=2;i<=20000000;i++)
		prime[i]=true;
		for(int i=2;i<4500;i++)
			if(prime[i])
  	for(int j=i*i;j<=20000000;j+=i)
  	prime[j]=false;


	int p=1;
	for(int l=3;l<=20000000;l++){
   	    if(prime[l]&&prime[l+2]){
			f[p][0]=l;f[p][1]=l+2;
       	 	p++;
   	    }
    }
        int n;
        while(cin >>n)
            cout <<"("<<f[n][0]<<", "<<f[n][1]<<")"<<endl;
                  
                  
                  
                
return 0;
}
