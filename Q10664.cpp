#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >>n;
	ofstream fout;
	fout.open("o.txt");
	while(n--){
		int f[20],temp,x=0,sum=0;
		string s;
		cin >>ws;
		getline(cin,s);
		stringstream ss(s);
		while(ss>>temp){
			f[x++] =  temp;
			sum += temp;
		}
	
		if(sum%2){
			cout <<"NO"<<endl;
			continue;
	}
		sort(f,f+x);
		int dp[200]={0};
		dp[0]=1;
		//cout <<sum<<endl;
		for(int i = 0;i < x;i++){
			for(int j = sum/2;j >= 0;j--)
				if(dp[j])
					dp[j+f[i]]=1;
		//	for(int k=0;k<=sum/2;k++)
			//	cout <<k<<" "<<dp[k]<<endl;
		}
		if(dp[sum/2])
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}
