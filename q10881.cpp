#include<iostream>
#include<algorithm>

using namespace std;
struct e{
	int x;
	int d;
};
struct f{
	int x;
	int d;
	int ind;
};
bool cmp( e a,e b){
	return a.x<b.x;
}
bool Cmp(f a, f b){
	return a.ind<b.ind;
}
int main(){
	
	int N;
	cin >>N;
	int ca=1;
	while(N--){
		int l,t,n;
		cin >>l>>t>>n;
		int p;
		char c;
		e a[10001],b[10001];
		for(int i=0;i<n;i++){
			cin >>p>>c;
			if(c=='R'){
				a[i].x=p;a[i].d=i;
				b[i].x=p+t,b[i].d=1;
			}
			else {
				a[i].x=p;a[i].d=i;
				b[i].x=p-t,b[i].d=2;
			}
		}
	sort(a,a+n,cmp);
	sort(b,b+n,cmp);
	f ans[10001];
	for(int i=0;i<n;i++){
		ans[i].x=b[i].x;
		ans[i].d=b[i].d;
		ans[i].ind=a[i].d;
		if(i>0&&b[i].x==b[i-1].x)
		ans[i].d=-1;
		if(i<n-1&&b[i].x==b[i+1].x)
		ans[i].d=-1;
	}
	sort(ans,ans+n,Cmp);
	cout <<"Case #"<<ca++<<":"<<endl;
	for(int i=0;i<n;i++){
		if(ans[i].x<0||ans[i].x>l){
			cout <<"Fell off"<<endl;
			continue;
		}
		cout <<ans[i].x;
		if(ans[i].d==1)cout <<" R"<<endl;
		else if(ans[i].d==2)cout <<" L"<<endl;
		else cout <<" Turning"<<endl;
		
	}
	
	cout <<endl;	
	}
	
}
