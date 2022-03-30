#include<bits/stdc++.h>

using namespace std;

int main(){
	char s[1000001];
	int n,t=1;
	while(scanf("%s",&s)!=EOF){ 
	
		scanf("%d",&n);
		printf("Case %d:\n",t++);
		int a,b;
	
		for(int i = 0;i < n;i++){
			scanf("%d %d",&a,&b);
			int f = 0;
			char c = s[0];
			for(int i = a+1 ;i <= b;i++)
				if(s[i]!=c){
					f = 1;
					break;
				}
			if(f) 
			 	puts("No");
			else
				puts("Yes");
		}
	}
	
}

