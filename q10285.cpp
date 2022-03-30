#include<iostream>

using namespace std;

int snow[105][105];
int R,C;
int  DFS(int w,int e,int length){
	int a=0, b=0,c=0,d=0;
	if(w-1>=0&&snow[w-1][e]<snow[w][e])a=DFS(w-1,e,length+1);
	if(w+1<R&&snow[w+1][e]<snow[w][e])b=DFS(w+1,e,length+1);
	if(e-1>=0&&snow[w][e-1]<snow[w][e])c=DFS(w,e-1,length+1);
	if(e+1<C&&snow[w][e+1]<snow[w][e])d=DFS(w,e+1,length+1);
	if(a||b||c||d){
		a = max(a,max(b,max(c,d))); 
 	return a;
}
	else
		return length;                          
 }

int main(){
	int n;
	string s;
	cin >>n;
	while(n--){

		cin >>s>>R>>C;
		for(int i=0;i<R;i++)
			for(int j=0;j<C;j++)
				cin >>snow[i][j];


		int maxn=0;
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){			
				int t=DFS(i,j,1);
				if(t>maxn)maxn=t;     
         }
}
	for(int i=0;i<s.size();i++)
		cout <<s[i];
	cout <<": "<<maxn<<endl;

}
   
}
