#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t,c=0;
	cin >>t;
	while(t--){
		int n,len=100,ans=0;
		string s[1005];
		cin >> n;
		for(int i=0;i<n;i++){
			cin >>s[i];		
			len = min(len,(int)s[i].size());
		}
		int suf[55][28]={0};
		bool used[55][28]={0};
		int live[1005],x = 0;
		for(int i = 0;i < len;i++){
			for(int j = 0;j < n;j++){
				suf[i][s[j][s[j].size()-i-1]-'A']++;
			}
		}
		for(int i=0;i<n;i++)
			if(suf[0][s[i][s[i].size()-1]-'A'] >= 2)
				live[x++] = i;
		int p ;
		if(x == 0)
			ans = 0 ;
		else{
			for(int i = 1;i < len;i++){
				p = x;
				
				for(int j = 0;j <= x;j++){
					int l = s[live[j]].size();
					if(suf[i-1][s[live[j]][l-i-1]-'A'] < 2 ){
						for(int k = i-1;k>=0;k--)
						if(!used[k][s[live[j]][l-i+(i-1-k)]-'A']){
							used[k][s[live[j]][l-i+(i-1-k)]-'A'] = true,ans++;
							
							break;
						}
					live[j] = 10000,x--;
					}
				}	
				sort(live,live+p);
				if(x<2)
					break;
			}
		}
		cout <<"Case #"<<++c<<": "<<ans*2<<endl;
	}
	
}
