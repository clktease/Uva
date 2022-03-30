#include <iostream>
#include <string>
#include <cmath>
#include<algorithm>

using namespace std;


int main()
{
  
	long long  dp[66][66][3]={0};
	dp[1][0][0]=1;
	dp[1][1][1]=0;
	dp[2][0][0]=1;
	dp[2][0][1]=1;
	dp[2][1][0]=1;
	dp[2][2][1]=1;
	for(int i=3;i<66;i++){
		for(int j=0;j<=i;j++){
			for(int k=0;k<=1;k++){
				if(k==0)
 					dp[i][j][k]=dp[i-1][j][k]+dp[i-1][j][k+1];
 				else
 					dp[i][j][k]=dp[i-1][j][k-1]+dp[i-1][j-1][k];
 
                                            }
                                          }
                                             }
	int a, b;
	while(cin >>a>>b&&a>=0&&b>=0){
		if(a==1&&b==1)
			cout <<"1"<<endl;
		else
 	  	cout <<dp[a][b][0]+dp[a][b][1]<<endl;

}
   
           

}
