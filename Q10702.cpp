#include<bits/stdc++.h>

using namespace std;
int f[105][105][105];
int main(){
	
	while(1){
		int c,s,e,t,x;
		cin >>c>>s>>e>>t;
		if(c==0)break;
		int q[105][105],p[105][105];
		bool end[105]={0};
		memset(f,0,sizeof(f));
		for(int i=1;i<=c;i++)
			for(int j=1;j<=c;j++)
				cin >>q[i][j];
		for(int i=0;i<e;i++){
			cin >>x;
			end[x]=true;
		}
		for(int i = 1;i <= c;i++){
			if(i != s)
				f[1][i][s] = q[s][i];
		}
		/*for(int q=1;q<=c;q++){
			for(int j=1;j<=c;j++) 
			cout <<f[1][q][j]<<" ";
			cout <<endl;
		}cout <<"--------"<<endl;*/
		for(int k = 2;k <= t;k++){
			for(int i = 1;i <= c;i++){
				for(int j = 1;j <= c;j++){
					if(f[(k-1)%100][i][j] > 0){
						for(int x = 1;x <=c;x++ )
							if(x!=i)
								f[k%100][x][i] = max(f[k%100][x][i],f[(k-1)%100][i][j]+q[i][x]);
						
					}
				}
			}
			/*for(int q=1;q<=c;q++){
						for(int j=1;j<=c;j++) 
						cout <<f[k%100][q][j]<<"  ";
						cout <<endl;
						}cout <<"--------"<<endl;
			cout <<k<<endl;*/
			if(k%100 == 0){
				for(int i=1;i<=c;i++)
					for(int j=1;j<=c;j++)
						p[i][j]=f[0][i][j];
				memset(f,0,sizeof(f));
				for(int i=1;i<=c;i++)
					for(int j=1;j<=c;j++)
						f[0][i][j]=p[i][j];
			}
			
		}
	
		
		int maxn = 0;	
			for(int i=1;i<=c;i++){
				if(end[i]){
					for(int j=1;j<=c;j++)
					maxn = max(maxn,f[t%100][i][j]);
				}
			}
		
				
		cout <<maxn<<endl;
		
		
		
		
	}
}
