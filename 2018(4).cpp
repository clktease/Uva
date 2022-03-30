#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n, a, b, c;
	//cout << ((unsigned long long)313152466*(unsigned long long)2147465536)%(unsigned long long)2147483647<<endl;
	cin >>n;
	while(n--){
		cin >>a>>b>>c;
		if(a==b){
			cout <<"0"<<endl;
			continue;
		}
		long long ans = 1,r,count=0;
		while(1){
			
			r = (a*(c/a+1))%c;
			cout <<r<<endl;
			if(r == b){
				cout <<ans*(c/a+1)<<endl;
				break;
			}
			else if(b % r ==0){
				cout <<ans*(c/a+1)*(b/r)<<endl;
				break;
			}
			else
				a = r;
			cout <<double(r-b)/(double)(c-r)<<endl;
			cout <<ans<<" "<<r<<endl;
			ans = ans * (c/a+1);
			count++;
			
			if(count >40)break;
		}
		
	}
	
}
