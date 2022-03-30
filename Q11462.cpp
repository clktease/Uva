#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
          
     
     int n;
   while (  cin >>n &&n>0)
 {   int a[2000000]={0};
 for (int i=0;i<n;i++)
     {
     
     cin >>a[i];
     }
     int f=0;
     sort(a,a+2000000);
     for (int i=0;i<2000000;i++){
    if(f)
    cout <<" ";
	 if(a[i]>0){
     	f=1;
         cout <<a[i];
	}
	
}                
         
     cout <<endl;    
         
                               
                               }      










   

return 0;

}
