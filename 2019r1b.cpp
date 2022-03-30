#include<bits/stdc++.h>

using namespace std;

int main(){
/*72	8 (4) (24) 18 (14) 12
56	24 28 18 16  11  9*/
	int t,p=0,w;
	cin >>t>>w;
	while(t--){
		int x,y,aaa;
		int a=0,b=0,c=0,d=0,e=0,f=0;
		cout <<72<<endl;
		cin >>x;
		cout <<56<<endl;
		cin >>y;
		c = x/16777216;
		x%=262144;
		e = x/16384;
		x%=256;
		b= x/16;
		
		y%=268435456;
		a = y/16777216;
		y%=262144;
		d = x/65536;
		x%=2048;
		f= x/512;

 
	/*	for(int i=0;i<6;i++){
			cout <<ask[i]<<endl;
			cin >>n[i];
			if(i==1){
				int s=n[1]-n[0];
				if(s==0)
					a=0;
				else 
					a=s/64;	
			}
			if(i==2){
				int s=n[0]-2*n[2];
					d= (s-32*a)/(2*-1);
			}
			if(i==3){
				int s=n[2]-n[3];
				if(s==8*a+d)
					b=0;
				else
					b= (s-8*a-d)/2;
			}
			if(i==4){
				int s=n[4]-n[2];
				if(s==16*a)
					e=0;
				else
					e= (s-16*a);
			}
			if(i==5){
				int s=n[3]-n[5];
				if(s==4*a)
					c=0;
				else
					c= (s-4*a);
			}
			//cout <<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
		}
		f = n[5]-4*a-2*b-c-d-f;*/
		cout <<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
		cin >>aaa;
		if(aaa==-1)
			break;
		
	}
	
} 
