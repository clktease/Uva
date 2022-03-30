#include <iostream>
#include<queue>
 
using namespace std;

struct point
{
    int i;
    int j;
       };
const  int direction[][2]={{-2,-1},{-1,-2},{-1,2},{-2,1},{2,1},{1,2},{1,-2},{2,-1}};
int BFS(point start,point end){
	int step[9][9]={0};
 	queue<point> q;
  	q.push(start);
  	point cur,nxt;
  	while(!q.empty()){
   cur=q.front();
   q.pop();
   if(cur.i==end.i&&cur.j==end.j)
   		return step[cur.i][cur.j];
   for(int i=0;i<8;i++){
    nxt.i=cur.i+direction[i][0];
    nxt.j=cur.j+direction[i][1];
    if(nxt.i<1||nxt.i>8||nxt.j<1||nxt.j>8)continue;
    if(step[nxt.i][nxt.j]==0){
    step[nxt.i][nxt.j]=step[cur.i][cur.j]+1;
    q.push(nxt);
    }
}
}
}  
      
 
int main(){
    char c[3],s[3];
    point start,end;
    while(cin >>c[0]>>c[1]){
     cin >>s[0]>>s[1];
     start.i=c[0]-'a'+1;
     start.j=c[1]-'0';
     end.i=s[0]-'a'+1;
     end.j=s[1]-'0';
     
     int move=BFS(start,end);
     cout <<"To get from "<<c[0]<<c[1]<<" to "<<s[0]<<s[1]<<" takes "<<move<<" knight moves.";
     cout <<endl;
     }
    
    
    

 return 0;
 

}
