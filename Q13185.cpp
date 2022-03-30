#include<iostream>

using namespace std ;

int main(){

int n, a, sum;
cin >>n;
for (int i=0;i<n;i++){
cin >>a;
for (int j=1;j<a-1;j++){
if (a%j==0)
sum=sum+j;
}
if (sum==a){
cout <<"perfect"<<endl;
sum=0;}
else if (sum>a){
cout <<"abundant"<<endl;
sum=0;}
else if (sum<a)
cout <<"deficient"<<endl;
sum=0;


}




	return 0;
}
