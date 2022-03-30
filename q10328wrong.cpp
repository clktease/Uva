#include<iostream>

using namespace std;

int main(){
	int f[101][101][2]={0};
	f[1][0][0]=1;f[1][1][1]=1;
	f[2][0][0]=1;f[2][1][1]=1;
	f[2][1][0]=1;f[2][2][1]=1;
	for(int i=3;i<10;i++){
		for(int j=1;j<=i;j++){
			for(int k=0;k<2;k++){
				if(k==0)
				f[i][j][k]=f[i-1][j][0]+f[i-1][j][1];
				else
				f[i][j][k]=f[i-1][j-1][0]+f[i-1][j][0];
			}
		}f[i][0][0]=1;
		f[i][i][1]=1;
	} 
		for(int i=3;i<10;i++){
		for(int j=1;j<=i;j++){
				cout <<i<<j<<" "<<f[i][j][0]+f[i][j][1]<<endl;
}cout <<endl;
}



}
