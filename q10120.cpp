#include<iostream>

using namespace std;
int a,b,flag=0;
void dfs(int x,int y){
    if(flag)return;
	if(x==b&&!flag){
		flag=1;
		cout <<"Let me try!"<<endl;
	}
	if(x<=0||x>a)return;
	dfs(x+y*2-1,y+1);
	dfs(x-y*2+1,y+1);
	return;
}
int main(){
	
	
	while(cin >>a>>b&&a){
	flag=0;	
	if(a>49){
		cout <<"Let me try!"<<endl;
	continue;
	}
		dfs(1,2);
		if(!flag)
		cout <<"Don't make fun of me!"<<endl;
	}
}
