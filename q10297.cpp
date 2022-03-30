#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	
	double d,v,x,ans,p=acos(-1);
	while(cin >>d>>v&&d){
		x=d*d*d/4*p;
		x-=v;	
		x-=(d*d*d*p/12);
		x=x/p*6;
	
		ans=pow(x,0.33333333);
	cout <<fixed<<setprecision(3)<<ans<<endl;
}
}
