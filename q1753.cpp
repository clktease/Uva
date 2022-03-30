#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b;
	while(cin >>a>>b){
		double f[1001],s[1001];
		double minx = 100000000;
		for(int i=0;i<a;i++){
			cin >>f[i]>>s[i];
			minx =  min(minx,s[i]);
		}
		double c=-1*minx,t=1001000;
		
		for(int i=0;i<80;i++){
			double mid = (c+t)/2; 
			double sum=0;
			for(int j=0;j<a&&sum<b;j++){
				sum+=(f[j]/(s[j]+mid));
			}
			if (sum >= b )c = mid;
			else t = mid;
		}	
			
		cout<<fixed<<setprecision(9)<<c<<endl;
	
		
	}
	
}
