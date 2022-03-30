#include<iostream>

using namespace  std;
bool run[10000000],used[101];
int ans[5],n,f[105][105],answer;
void dfs(int z,int x,int y ){
	if(z==1){
	ans[2]=y;
	if(!f[ans[2]][ans[0]])return;
		int a=(ans[0]+1)*10000+(ans[1]+1)*100+(ans[2]+1),b=(ans[0]+1)+(ans[1]+1)*10000+(ans[2]+1)*100;
		int c=(ans[0]+1)*100+(ans[1]+1)+(ans[2]+1)*10000;
		
		if(!run[a]&&!run[b]&&!run[c]){
			if(ans[0]<ans[1]&&ans[1]<ans[2] || ans[0]>ans[1]&&ans[1]>ans[2]){
			cout <<ans[0]+1<<" "<<ans[1]+1<<" "<<ans[2]+1<<endl;
			run[a]=run[b]=run[c]=true;
			answer++;
		}}
		return;
	}

	ans[0]=x;ans[1]=y;
	for(int i=0;i<n;i++){
		if(f[y][i]&&i!=x){

		dfs(z+1,y,i);
	}
	}
	return ;
}
int main(){
	
	while(1){
		for(int i=0;i<10000000;i++)
		run[i]=false;
		cin >>n;
		answer=0;
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin >>f[i][j];
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		if(f[i][j]){
		for(int k=0;k<101;k++)used[k]=false;
		dfs(0,i,j);
		
}cout <<"total:"<<answer<<endl;
cout <<endl;
	}
	
	
	
}
