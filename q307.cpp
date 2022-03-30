#include<iostream>
#include<algorithm>

using namespace std;
int f[105],n;
bool used[105];
int dfs(int now,int x,int p,int y){
	if(n==y)return 1;
	for(int i=n-1;i>=0;i--){
		if(used[i])continue;
		if(now+f[i]<x){
			used[i]=true;
			if(dfs(now+f[i],x,i-1,y+1))
			return 1;
			used[i]=false;
			while(i>0&&f[i-1]==f[i])i--;
		}
		else if(now+f[i]==x){
			used[i]=true;
			if(dfs(0,x,n,y+1))
			return 1;
			used[i]=false;
			return 0;
		}
		if(now==0)
		return 0;
		
	}
	return 0;
}
int main(){
	
	while(cin >>n&&n){
		int  x=0;
		for(int i=0;i<n;i++){
		cin >>f[i];
		x+=f[i];
		} 
	
		sort(f,f+n);
		for(int i=n;i>=1;i--){
			 for(int j=0;j<n;j++)used[j]=false;
		if(x%i==0&&x/i>=f[n-1]){
		
       if(dfs(0,x/i,n,0)){
			cout <<x/i<<endl;
			break;}
		}	
		}	
		
	}
}
