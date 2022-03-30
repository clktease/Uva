#include <iostream>

using namespace std;
     
int main(){
int n;
while (cin >>n){
	int t;
	int m=0;
      int a[1000];
      for (int k=0;k<n;k++){
          cin >>a[k];
          }
      for(int i=0;i<n-1;i++){
	  	for (int j=n-1;j>i;j--){
           if(a[j]<a[j-1]){
				t=a[j];
           		a[j]=a[j-1];
           		a[j-1]=t;
           		m++;
           }
           }
      }
               
cout <<"Minimum exchange operations : "<<m<<endl;

}

}
