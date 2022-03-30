#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int x,y;
	string a,b;
	while(cin >>x>>a){
		cin >>y>>b;
		int f[300][300];
		for(int i = 0;i < 300;i++)
			f[i][0] = f[0][i] = i;
		for(int i = 0;i < x;i++){
			for(int j = 0;j < y;j++)
				if(a[i] == b[j])
					f[i+1][j+1] = min(f[i][j],min(f[i+1][j]+1,f[i][j+1]+1));
				else
					f[i+1][j+1] = min(f[i][j],min(f[i+1][j],f[i][j+1]))+1;
		} 
	/*	for(int i = 0;i <= x;i++){
			for(int j = 0;j <= y;j++)
				cout <<f[i][j]<<'\t';
			cout <<endl;		
		}*/
		cout <<f[x][y]<<endl;
		
	}
	
} 
