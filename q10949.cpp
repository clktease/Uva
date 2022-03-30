#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int t,p=1;
	cin >>t;
	while(t--){
		char f[21][21]={};
		int a,b;
		cin >>a>>b;
		for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++)
		cin >>f[i][j];
		
		char s1[20001]={0},s2[20001]={0};
		s1[0]='1';s2[0]='1';
		int n,x,y;
		char c;
		cin >>n>>x>>y;
		s1[1]=f[x][y];
		for(int i=2;i<=n+1;i++){
			cin >>c;
			if(c=='N')x--;if(c=='S')x++;
			if(c=='W')y--;if(c=='E')y++;
			s1[i]=f[x][y];
			
		}		cin >>n>>x>>y;s2[1]=f[x][y];
		for(int i=2;i<=n+1;i++){
			cin >>c;
			if(c=='N')x--;if(c=='S')x++;
			if(c=='W')y--;if(c=='E')y++;
			s2[i]=f[x][y];
		}
		int ans[100][100];
		for(int i=0;i<21;i++)ans[i][0]=ans[0][i]=0;
		 x=strlen(s1)-1,y=strlen(s2)-1;
		for(int i=1;i<=x;i++){
			for(int j=1;j<=y;j++){
				if(s1[i]==s2[j])
				ans[i][j]=ans[i-1][j-1]+1;
				else
				ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
			}
		}
	    
		cout <<"Case "<<p++<<": "<<x-ans[x][y]<<" "<<y-ans[x][y]<<endl;
		 
	}
	
}
