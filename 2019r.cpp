#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t,c=0;
	cin >>t;
	while(t--){
		int a,b,x,y;
		char s;
		cin >>a>>b;
		int col[100001]={0},row[100001]={0};
		int ansx=0,ansy=0,mx=0,my=0;
		for(int i=0;i<a;i++){
			cin >>x>>y>>s;
			if(s=='N'){
				if(y<50000)
				for(int k=y-1;k>=0;k--)
				row[k]--;
				else
				for(int k=y+1;k<=b;k++)
				row[k]++;
			}
			else if(s=='S'){
				if(y>50000)
				for(int k=y+1;k<=b;k++)
				row[k]--;
				else
				for(int k=y-1;k>=0;k--)
				row[k]++;
			}
			else if(s=='E'){
				if(x<50000)
				for(int k=x-1;k>=0;k--)
				col[k]--;
				else
				for(int k=x+1;k<=b;k++)
				col[k]++;
			}
			else{
				if(x>50000)
				for(int k=x+1;k<=b;k++)
				col[k]--;
				else
				for(int k=x-1;k>=0;k--)
				col[k]++;
			}
		}
		for(int i=0;i<100001;i++){
			if(row[i]>my)
				my = row[i],ansy=i;
			if(col[i]>mx)
				mx = col[i],ansx=i;	
		}
		cout <<"Case #"<<++c<<": ";
		cout <<ansx<<" "<<ansy<<endl;
	}
	
} 
