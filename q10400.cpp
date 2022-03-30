#include<iostream>

using namespace std;
char c[105];
int f[105],ans,n,x;;
bool used[100][64005];
void dfs(int d,int p){
	
	if(d==n&&x==p&&!ans){
	    for(int i=0;i<n-1;i++){
			cout <<f[i]<<c[i];
		}cout <<f[n-1]<<"="<<x<<endl;
		ans=1;
		return;
	}
	if(d==n||used[d][p])return;
	used[d][p]=true;
	if(p+f[d]<32001&&p+f[d]>-32001&&!ans){
	c[d-1]='+';dfs(d+1,p+f[d]);
}
	if(p-f[d]<32001&&p-f[d]>-32001&&!ans){
	c[d-1]='-';dfs(d+1,p-f[d]);
}
    if(p*f[d]<32001&&p*f[d]>-32001&&!ans){
	c[d-1]='*';dfs(d+1,p*f[d]);
}
    if(p/f[d]<32001&&p/f[d]>-32001&&p%f[d]==0&&!ans){
	c[d-1]='/';dfs(d+1,p/f[d]);
}
    return;
}
int main(){
	
	int N;
	cin >>N;
	while(N--){
		
		cin >>n;
		for(int i=0;i<n;i++)
		cin >>f[i];
		cin >>x;
	ans=0;
	for(int i=0;i<100;i++)
	for(int j=0;j<64001;j++)used[i][j]=false;
		dfs(1,f[0]);
		if(!ans)cout <<"NO EXPRESSION"<<endl;
	}
}
