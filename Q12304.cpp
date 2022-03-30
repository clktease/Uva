#include<bits/stdc++.h>

using namespace std;

int f[1005][1005];
int main(){
	f[1][1] = 1;
	int ans[1005]={0};
	for(int i=1;i<=1001;i++){
		for(int j=1;j<=i;j++){
			f[i+1][j] += (f[i][j]%10056 * j);
			f[i+1][j+1] += f[i][j]%10056 *(j+1);
		}
		for(int j = 1;j <= i;j++)
			f[i][j]%=10056,ans[i] += f[i][j];	
	}
	int n,c=0,x;
	cin >>n;
	while(n--){
	cin >>x;
	cout <<"Case "<<++c<<": "<<ans[x]%10056<<endl;
}
} 
