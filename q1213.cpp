#include<iostream>

using namespace std;

int main(){
	bool prime[1200];
	for(int i=0;i<1200;i++)prime[i]=true;
	for(int i=2;i<36;i++)
	if(prime[i])
	for(int j=i*i;j<1200;j+=i)prime[j]=false;
	
	int f[1200][20]={0},a[500],n=0;
	for(int i=2;i<=1120;i++){
		if(prime[i]){
			a[n]=i;
			n++;
		}
	}
	f[0][0]=1;
	for(int i=0;i<n;i++){
		cout <<a[i];
	 for(int j = 1120; j >= a[i]; j--) {
            for(int k = 14; k >= 1; k--)
                f[j][k] += f[j-a[i]][k-1];
        
    }
	}
	
 	for(int i=0;i<=1000;i++){
 		cout <<i;
 		for(int j=1;j<=14;j++)
 		cout <<" "<<f[i][j]<<" ";
 		cout <<endl;
	 }
	
}
