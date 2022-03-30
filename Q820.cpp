#include<bits/stdc++.h>

using namespace std;
int f[105][105],c[105][105],r[105][105];
bool visit[105];
int path[105];
int flow[105],T;
int bfs(int s,int t){
	memset(visit,0,sizeof(visit));
	queue <int> Q;
	visit[s] = true;
	path[s] = s;
	flow[s] = 1e9;
	Q.push(s);
	while(!Q.empty()){
		int x = Q.front();Q.pop();
		for(int i = 0;i < T;i++){
			if(!visit[i] && r[x][i] > 0){
				visit[i] = true;
				Q.push(i);
				path[i] = x;
				flow[i] = min(flow[x],r[x][i]);
				if(i==t) return flow[i];
			}
		}
	}
	return 0;	
}
int main(){
	
	int s,t,con;
	
	while(cin >>T && T){
		cin >>s>>t>>con;
		memset(f,0,sizeof(f));
		memset(c,0,sizeof(c));
		int a,b,w;
		for(int i = 0;i < con;i++){
			cin >>a>>b>>w;
			r[a-1][b-1] = (c[a-1][b-1] += w);
				
		}
		int maxn , ar;
		s--,t--;	
		for(maxn = 0;ar = bfs(s,t); maxn += ar){
			for(int i = path[t],j = t;i != j;i = path[j=i]){			
				f[i][j] += ar;
				f[j][i] = -f[i][j];
				r[i][j] = c[i][j] - f[i][j];
				r[j][i] = c[j][i] - f[j][i];
			}
		}	
		cout <<maxn<<endl;
	}
	
}
