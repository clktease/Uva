#include<iostream>
#include<queue>

using namespace std;
int A,B,C,D;
int dp[201][201][201],res[205];
queue <int >qa,qb,qc,qtot;
void pushnode(int a,int b,int c,int tot){
	qa.push(a);qb.push(b);qc.push(c);qtot.push(tot);
}
void update(int a,int b,int c,int tot){
	if(dp[a][b][c]<=tot)return ;
	if(res[D]<=tot)return ;
	dp[a][b][c]=tot;
	res[a]=min(res[a],tot);
	res[b]=min(res[b],tot);
	res[c]=min(res[c],tot);
	if(a<B-b)pushnode(0,b+a,c,tot+a);
	else pushnode(a-B+b,B,c,tot+B-b);
	if(a<C-c)pushnode(0,b,c+a,tot+a);
	else pushnode(a-C+c,b,C,tot+C-c);
	
	if(b<A-a)pushnode(a+b,0,c,tot+b);
	else pushnode(A,b-A+a,c,tot+A-a);
	if(b<C-c)pushnode(a,0,c+b,tot+b);
	else pushnode(a,b-C+c,C,tot+C-c);
	
	if(c<A-a)pushnode(a+c,b,0,tot+c);
	else pushnode(A,b,c-A+a,tot+A-a);
	if(c<B-b)pushnode(a,b+c,0,tot+c);
	else pushnode(a,B,C-B+b,tot+B-b);
	

}
void bfs(int a,int b,int c,int tot){
	qa.push(a);qb.push(b);qc.push(c);qtot.push(tot);
	while(!qa.empty()){
		a=qa.front();qa.pop();
		b=qb.front();qb.pop();
		c=qc.front();qc.pop();
		tot=qtot.front();qtot.pop();
		update(a,b,c,tot);
	}
}
int main(){
	 int n;
	 cin >>n;
	 while(n--){
	 	cin >>A>>B>>C>>D;
	 	for(int i=0;i<=A;i++)
	 	for(int j=0;j<=B;j++)
	 	for(int k=0;k<=C;k++)
	 	dp[i][j][k]=100000;
	 	for(int i=0;i<=D;i++)
	 	res[i]=100000;
	 	bfs(0,0,C,0);
	 	while(res[D]==100000)D--;
	 	cout <<res[D]<<" "<<D<<endl;
	 	
	 }
	
} 
