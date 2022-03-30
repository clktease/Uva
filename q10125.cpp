#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n,f[10000];
	while(cin >>n&&n){
	
	for(int i=0;i<n;i++)
	cin>>f[i];
	sort(f,f+n);
	int ans=0;
	for(int i=n-1;i>=0;i--){
		for(int a=0;a<n;a++){
			for(int b=a+1;b<n;b++){
				for(int c=b+1;c<n;c++){
					if(f[i]==f[a]+f[b]+f[c]&&a != i && b != i && c != i){
						cout <<f[i]<<endl;
						i=0;ans=1;
						break;
					}
				}
			}
		}
	} 
	if(!ans)cout <<"no solution"<<endl;
	


}
}
 
