#include<bits/stdc++.h> 

using namespace std;

int main(){
	int t,p=0;
	cin >>t;
	while(t--){
		string s[256];
		int x;
		cin >>x;
		for(int i=0;i<x;i++)
			cin >>s[i];
		bool sur[256]={0};
		int flag = 0;
		string ans="";
		for(int i=0;i<400;i++){
		int a=0,b=0,c=0;
			for(int j=0;j<x;j++){
				if(sur[j])
					continue;
				if(s[j][i%s[j].size()]=='P')
					a++;
				if(s[j][i%s[j].size()]=='S')
					b++;
				if(s[j][i%s[j].size()]=='R')
					c++;
				if(a&&b&&c){
					flag = 1;
					break;
				}
			}
			//cout <<a<<b<<c<<endl;
			if(flag)break;
			if(a&&b||a&&c==0&&b==0){
			ans+='S';
			if(a==1||a&&c==0&&b==0){
				for(int j=0;j<x;j++)
					if(s[j][i%s[j].size()]=='P')
						sur[j] = 1;  
			}
		}
			else if(a&&c||c&&a==0&&b==0){
			ans+='P';
			if(c==1||c&&a==0&&b==0){
				for(int j=0;j<x;j++)
					if(s[j][i%s[j].size()]=='R')
						sur[j] = 1;  
			}
		}
			else if(b&&c||b&&c==0&&a==0){
			ans+='R'; 
			if(b==1||b&&c==0&&a==0){
				for(int j=0;j<x;j++)
					if(s[j][i%s[j].size()]=='S')
						sur[j] = 1;  
			}
			
		}
					
			
		}
		cout <<"Case #"<<++p<<": ";
		if(flag)
			cout <<"IMPOSSIBLE"<<endl;
		else{
			for(int i=0;i<ans.size();i++)
				cout <<ans[i];
			cout<<endl;
		}
		
	}
	
	
} 
