#include<bits/stdc++.h>

using namespace std;
int f[1000005];
int main(){
	//fstream fout;
	//fout.open("output.txt");
	string s;
	while(cin >>s&&s[0]!='.'){
		memset(f,0,sizeof(f));
		for(int i = 1,j = f[0] = -1; i < s.size();i++){
			while(j >= 0 && s[j+1] != s[i])
				j = f[j];
			cout <<j<<endl;
			if(s[i] == s[j+1]) j++;
			f[i] = j;
			cout <<j<<endl;
			
		}	
		
		int x = s.size()/(s.size()-f[s.size()-1]-1);
		cout <<x<<endl;
		//fout <<x<<endl;
	}
	
}
