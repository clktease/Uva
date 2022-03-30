#include<iostream>
#include<map>
using namespace std;

int main(){
	
	
	string s[25];
	
	int n;
	cin >>n;
	while(n--){
	map <string,int>f;
	map <string,int>::iterator iter;
	map<string, string>::reverse_iterator iter_r;	
		int a,b,x=0;
		cin >>a;
		getchar();
		for(int i=0;i<a;i++){
			string s1,s2;
			getline(cin ,s1);
			getline(cin ,s2);
			f[s1]=1;
			s[x++]=s2;
		}
		cin >>b;
		getchar();
		for(int i=0;i<b;i++){
			string vote;
			getline(cin,vote);
			if(f[vote]>=1)
			f[vote]++;
		} 
		for(iter=f.begin();iter!=f.end();iter++)
		cout <<iter->first<<" "<<iter->second<<endl;
	
		
	}
	
	
	
}
