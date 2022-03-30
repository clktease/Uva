#include<bits/stdc++.h>

using namespace std;
string s[1005];
int ans = 0;
bool used[26];
void div(char x,int st,int e,int sum,int now,int cc){
	//cout <<st<<" "<<e<<" "<<sum<<endl;
	if(sum < 4 && sum > 1){
		for(int j = now;j >= 0;j++)
			if(!used[ s[st][j] -'A']){
				used[ s[st][j] -'A']=true;
				ans++;
				break;
			}
		return;	
	}
	int sum1 = 1,res = st,f=0;
	char c = s[st][now+1];
	for(int i = st+1; i <=e ;i++){
		//cout <<c<<endl;
		if(s[i][now+1] != c){
			c = s[i][now+1];
			if(sum1 > 2){
			div(c,res,i-1,sum1,now+1,cc);
			//cout <<sum1<<endl;
			f += (i-res);
			res = i;
			sum1 = 0; 
		}
		}
		else sum1++;
		if(i==e &&sum1 >1){
			div(c,res,i,sum1,now+1,cc);
			f += (i-res+1);
		}
	}
	//cout <<"********"<<c<<f<<ans<<endl;
	if(cc-f>1) ans++;
	return;
}
int main(){
	
	int t,ca=0;
	cin >>t;
	while(t--){
		int n;
		ans = 0;
		cin >> n;
		memset(used,0,sizeof(used)); 
		for(int i=0;i<n;i++){
			cin >>s[i];		
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<s[i].size()/2;j++)
				swap(s[i][j],s[i][s[i].size()-1-j]);
		}
		sort(s,s+n);
		
		int sum = 1,res = 0;
		char c = s[0][0];
		for(int i = 1; i < n;i++){
			if(s[i][0] != c){
				c = s[i][0];
				if(sum > 2){
				div(c,res,i-1,sum,0,i-res);
				res = i;
				sum = 0;
			}
			}
			else sum++;
			//cout <<sum<<endl;
			if(i==n-1 &&sum >1)
				div(c,res,i,sum,0,i-res+1);
		}
		
		cout <<"Case #"<<++ca<<": "<<ans*2<<endl;
	}
	
}
