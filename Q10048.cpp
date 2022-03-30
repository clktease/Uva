#include<iostream>


using namespace std;


 
int main(){
	int f[101][101];
	int a, b, c,count=0;
	while(cin >>a>>b>>c &&a>0){
	if(count) 
		cout <<endl;
	cout <<"Case #"<<++count<<endl;
	for(int i=0;i<101;i++)
		for(int j=0;j<101;j++)
			f[i][j]=f[j][i]=100000;
	int q1,q2,w;
	for(int i=0;i<b;i++){
		cin >>q1>>q2>>w;
		f[q1][q2]=f[q2][q1]=w;
	}
	for(int k=1;k<=a;k++)
		for(int i=1;i<=a;i++)
			for(int j=1;j<=a;j++)
				f[i][j]=min(f[i][j],max(f[i][k],f[k][j]));
	int r,t;
	for(int i=0;i<c;i++){
	cin >>r>>t;
	if(f[r][t]<100000)
		cout <<f[r][t]<<endl;
	else
		cout <<"no path"<<endl;
}




          
          
          }
          
  return 0;    
}
