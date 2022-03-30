#include<bits/stdc++.h> 

using namespace std;

int main(){
		
	string a,b;
	int t = 0;
	while(cin >>a >>b){
		if(t)cout <<endl;
		int  c[210]={0};
		int A[110]={0},B[110]={0};
		for(int i = 0;i < a.size();i++)
		A[i] = a[a.size()-1-i]-'0';
		for(int i = 0;i < b.size();i++)
		B[i] = b[b.size()-1-i]-'0';
	
		for(int i = 0;i < max(a.size(),b.size());i++)
			c[i] = A[i] + B[i];	
			
		int m = max(a.size(),b.size())+4;
		for(int k = 0;k < 15;k++){
			for(int i = m;i > 0 ;i--){
				while(c[i] > 0 && c[i-1] > 0){
					c[i+1] += 1; 
					c[i]-=1,c[i-1]-=1;
			}	
		}
		
		while(c[0] >= 2)c[1]++,c[0]=0;
		while(c[1] >= 2)c[1]-=2,c[0]+=1,c[2]+=1;
		
		for(int i = 2;i < m;i++)
			while(c[i] > 1){
				c[i]--,c[i-1]+=1,c[i-2]+=1;
			}
		
}
		int p = 0;	
	
		for(int i = m;i >= 0;i--)
			if(c[i]){
				p = i;
			break;
		}
		
		for(int i = p;i >= 0;i--)
			cout <<c[i];
		cout <<endl;
		t++;
}
	
}
