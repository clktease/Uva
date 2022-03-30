#include<iostream>

using namespace std;
int f[105][105];

int main(){

	int n,count=0;
		cin >>n;
	while(n--){
		cout <<"Case ";
	cout <<++count<<": ";
	for(int i=0;i<105;i++)
		for(int j=0;j<105;j++)
			f[i][j]=10000;
	int a, b,c,d;
	cin >>a>>b;
	for(int i=0;i<b;i++)	{
		cin >>c>>d;
		f[c][d]=f[d][c]=1;
}
	int s,e;
	cin >>s>>e;

	for(int k=0;k<a;k++)
		for(int i=0;i<a;i++)
			for(int j=0;j<a;j++)
				f[i][j]=min(f[i][j],f[i][k]+f[k][j]);

	for(int i=0;i<a;i++)
		for(int j=0;j<a;j++)
			if(i==j)f[i][j]=0;


	int ms=0;

	for(int i=0;i<a;i++)
		if(f[s][i]+f[i][e]>ms)
			ms=f[s][i]+f[i][e];

	cout <<ms<<endl;
	
	
}

}
