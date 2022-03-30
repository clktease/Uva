#include<iostream>

using namespace std;
string  pre,in;
int p;	
	void divide(  int a ,int b){
	if(a>b)return;

	if(a==b){
		p++;
		cout <<in[a];
		return;
	}
	int x;
	for(int i=a;i<=b;i++)
		if(in[i]==pre[p])
			x=i;p++;
	  
	divide(a,x-1);
	divide(x+1,b);
	
	cout <<in[x];
	return ;
} 
int main(){
	
	while(cin >>pre>>in){
		p=0;
		divide( 0 ,in.size()-1);
		cout <<endl;
	}
}
