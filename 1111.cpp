#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a[5]={1,2,3,4,5};
	int sum = 0 , x = a[1]*1000+a[2]*100+a[3]*10+a[4];
	sum += x;
	int t=1;
	while(next_permutation(a,a+4)){
		t++;
		x = a[1]*1000+a[2]*100+a[3]*10+a[4];
		cout <<x<<endl;
	sum += x;		
	} 
	cout <<t<<" "<<sum<<endl;
}
