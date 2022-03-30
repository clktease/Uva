#include<iostream>
#include<queue>
using namespace std ;
char f[101][101];
int ans[101][101];
int a,b;
const int h[8][3]={{1,2},{2,1},{1,-2},{-1,2},{-2,1},{2,-1},{-1,-2},{-2,-1}};
const int g[8][3]={{1,0},{0,1},{1,-1},{-1,1},{0,-1},{-1,-1},{-1,-0},{1,1}};

struct point{
	int x;
	int y;
};
int bfs(int s,int t){
	for(int i=0;i<101;i++)
		for(int j=0;j<101;j++)
			ans[i][j]=0;
	point cur,nxt;	
	queue<point> Q;
	cur.x=s;cur.y=t;
	Q.push(cur);
	
	while(!Q.empty()){
		cur=Q.front();
		Q.pop();

		for(int i=0;i<8;i++){
			nxt.x=cur.x+g[i][0];	
			nxt.y=cur.y+g[i][1];	
		if(nxt.x<0||nxt.x>=a||nxt.y<0||nxt.y>=b||ans[nxt.x][nxt.y]>0)continue;

		if(f[nxt.x][nxt.y]=='.'||f[nxt.x][nxt.y]=='B'){
			ans[nxt.x][nxt.y]=ans[cur.x][cur.y]+1;
		if(f[nxt.x][nxt.y]=='B')return ans[nxt.x][nxt.y];
		Q.push(nxt);
	
}		
}			
}
	
return 0;	
		
}
int main(){
	
	
int t,x;
cin >>t;
while(t--){
	cin >>a>>b;
	for(int i=0;i<101;i++)
			for(int j=0;j<101;j++)
	f[i][j]=0;
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
			cin >>f[i][j];
	
	
	for(int i=0;i<a;i++){	
		for(int j=0;j<b;j++){
			if(f[i][j]=='Z'){
				for(int k=0;k<8;k++)
					if(f[i+h[k][0]][j+h[k][1]]=='.')
						f[i+h[k][0]][j+h[k][1]]='x';
	}}
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
			if(f[i][j]=='A')
  			  x=bfs(i,j);	
}
	

	if(x)	
		cout <<"Minimal possible length of a trip is "<<x<<endl;	
	else
		cout <<"King Peter, you can't go now!"<<endl;
		
}	
		
	return 0;
}
