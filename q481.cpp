#include<iostream>

using namespace std;

int main(){
	
	int f[100000],l[100000];
	int n = 0;
	while(cin >>f[n])n++;
	
	int m = -100;
	for(int i = 0;i < n;i++){
		int x = 1;
		for(int j = 0;j < i;j++){
			if(f[i] > f[j]&&l[j]+1 > x)
			x=l[j]+1;
		}
		l[i] = x;
		if(l[i]>m)m = l[i];
	}
	cout <<m<<endl;
	cout <<"-"<<endl;
	int x = m;
	int ans[20000];
	for(int i = n-1;i >= 0&&m > 0;i--)
	if(l[i] == m){
		ans[m--] = f[i];
	}
	for(int i = 0;i <= x;i++)
	cout <<ans[i]<<endl;
}
