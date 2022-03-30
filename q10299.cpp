#include<iostream>


using namespace std;

int main(){
	bool prime[32000];
	int f[5000],x=0;
	for(int i=2;i<200;i++)
		if(!prime[i])
			for(int j=i*i;j<32000;j+=i)
				prime[j]=true;
 	for(int i=2;i<32000;i++)
		if(!prime[i])f[x++]=i;
	long y;	
	while(scanf("%d",&y)&&y){
		int n=0;	
		if(y==1){
		cout <<"0"<<endl;
		continue;
	}

	long pf[10],p=0,q=y;
	for(int i=0;i<x&&y>1;i++){
		if(y%f[i]==0){
			pf[p++]=f[i];
				while(y%f[i]==0)y/=f[i];
	}
}
	if(y>1)pf[p++]=y;

	for(int i=0;i<p;i++){
	q=q/pf[i]*(pf[i]-1);
}

	printf("%d\n",q);

}
    
}
