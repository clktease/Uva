#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int f[10][2]={0},ans[100];
	f[1][0]=1;f[2][0]=4;f[2][1]=6;f[3][0]=7;f[3][1]=3;f[4][0]=6;
	f[5][0]=5;f[6][0]=6;f[7][0]=3;f[7][1]=7;f[8][0]=6;f[8][1]=4;
	f[9][0]=9;f[0][0]=0;
	long long  x=0;
	for(int i=0;i<100;i++){
		x+=f[i%10][0];
		if(f[i%10][1])
		swap(f[i%10][0],f[i%10][1]);
		
		ans[i]=x%10;
		
	x%=1000;
	}
	string s;
	while(cin >>s){
		if(s.size()==1&&s[0]=='0')break;
		int a;
		if(s.size()>1)
			a=(s[s.size()-1]-'0')+(s[s.size()-2]-'0')*10;
		else
			a=(s[s.size()-1]-'0');
		cout <<ans[a]<<endl;
	}
	
}
