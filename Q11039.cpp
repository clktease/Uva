#include<iostream>

#include <algorithm>

using namespace std;
int f[500005]={0};
bool cmp(int a,int b){
	return abs(a)>abs(b);
}
int main(){

	int n;
	cin >>n;
	while(n--){

	int a;
	cin >>a;
	for(int i=0;i<a;i++)
		cin >>f[i];

	sort(f,f+a,cmp);



	bool check;
	if(f[0]<0)
		check=false;
	else
		check=true;
	int count=1;
	for(int i=1;i<a;i++){
		if(check&&f[i]*-1>0)
			count++,check=false;
		if(!check&&f[i]>0)
			count++,check=true;
	
}
	cout <<count<<endl;
	
	
}

}
