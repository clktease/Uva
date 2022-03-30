#include<iostream>

using namespace std;

int main(){
	
	int t;
	cin >>t;
	while(t--){
		
		int x,a[105],b[105],c[105],d[105],p[105],n;
		cin >>x>>n;
		for(int i = 0;i < n;i++){
			cin >>a[i*2]>>b[i*2]>>c[i*2];
			b[i*2+1] = a[i*2],a[i*2+1] = b[i*2],c[i*2+1]=c[i*2];
			d[i] = 1e9;p[i] = 1e9;
		}
		d[0] = 0;
		p[0] = 0;
		for(int k = 0;k < x-1;k++){
			for(int i = 0;i < n*2;i++){
				if(d[b[i]] > d[a[i]]+c[i] && p[a[i]] != b[i]){
					d[b[i]] = d[a[i]]+c[i];
					p[b[i]] = a[i];
					cout <<"*";
				}
				cout <<b[i]<<" "<<a[i]<<" "<<d[b[i]]<<" "<<d[a[i]]<<" "<<c[i]<<endl;
			}
			cout <<endl;
		
		
		for(int i=0;i<n;i++)
			cout <<d[i]<<endl;
		}
		int flag=0;
		for(int i = 0;i < n;i++)
			if(d[b[i]] > d[a[i]]+c[i]&&p[a[i]]!=b[i])
				flag = 1;	
		if(flag==1)
			cout <<"negative"<<endl;
		
	}
	
} 
