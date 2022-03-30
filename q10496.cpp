#include<iostream>
#include<cmath>

using namespace std;
int a,b,minx,x,f[15][3];
bool used[15];
void dfs(int n,int sum,int q,int w){
	
	if(n==x){
		sum=sum+(abs(a-q)+abs(b-w));
		if(sum<minx)minx=sum;
		return;
	}
	for(int i=0;i<x;i++){
		if(!used[i]){
			used[i]=true;
			dfs(n+1,sum+abs(q-f[i][0])+abs(w-f[i][1]),f[i][0],f[i][1]);
			used[i]=false;
		}	
	}
	return;
} 

int main(){
	
	int n;
	cin >>n;
	while(n--){
		int c,d;
		cin >>c>>d>>a>>b>>x;
		for(int i=0;i<x;i++)
		cin >>f[i][0]>>f[i][1];
 	minx=1000000;
	 for(int i=0;i<15;i++)	used[i]=false;
	dfs(0,0,a,b);
		cout<<"The shortest path has length "<<minx<<endl;
		
	}
	
}

