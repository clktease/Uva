#include<bits/stdc++.h>

using namespace std;
int a,b;
int f[21][21],p,flag;
bool used[21][21];
void dfs(int x,int y,int n){
	
	if(n==p){
	
	flag = 1;
	return ;
}
	for(int i=1;i<=a&&!flag;i++){
		for(int j=1;j<=b&&!flag;j++){
			if(!used[i][j]&&i!=x&&j!=y&&i+j!=x+y&&i-j!=x-y){
				f[i][j] = n;
				used[i][j] = true;
				dfs(i,j,n+1);
				used[i][j] = false;
			}
		}
	}
	return ;
}
int main(){
	
	int t,c=0;
	cin >>t;
	while(t--){
		cin >>a>>b;
		p = a*b;
		for(int i=0;i<=a;i++)
			for(int j=0;j<=b;j++)
				f[i][j] = used[i][j] = 0;
		 flag = 0;
		for(int i=1;i<=a&&!flag;i++){
			for(int j=1;j<=b;j++){
				used[i][j] = true;
				dfs(i,j,1);
				used[i][j] = false;
				if(flag==1){
					
					break;
				}
			}
		}
		if(flag){
			int ans[500][2];
			for(int i=1;i<=a;i++)
				for(int j=1;j<=b;j++)
					ans[f[i][j]][0]=i,ans[f[i][j]][1]=j;
			cout <<"Case #"<<++c<<": POSSIBLE"<<endl;
			for(int i=0;i<a*b;i++)
				cout <<ans[i][0]<<" "<<ans[i][1]<<endl;
		}
		else
			cout <<"Case #"<<++c<<": IMPOSSIBLE"<<endl;
	}
	
}
