#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t,c=0;
	cin >>t>>m>>n;
	while(t--){
		int m,n;
		
		int a[7]={18,17,8,5,7,13,11};
		vector<int> ans(1000010, 0);
		for(int i=0;i<7;i++){
			for(int j=0;j<18;j++){
				if(j) cout <<" ";
				cout <<a[i];
			}
			cout <<endl;
			int sum = 0,x;
			for(int j=0;j<18;j++){
				cin >>x;
				sum = (sum+x)%a[i];
			}
			for(int k=sum;k<1000010;k+=a[i])
				ans[k] +=1;
		}
		
		for(int i=1;i<=1000010;i++)
			if(ans[i]==7){
				cout <<i<<endl;
				break;
			}	
		int y;
		cin >>y;
		
		
	}
	
}
