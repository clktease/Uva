#include<iostream>

using namespace std;


int main(){
   string s;
   
   while(getline (cin, s) ){
   if(s[0]=='0')
		break;
	int divide=0;
   for(int i=0;i<s.size();i++){
   		divide=divide*10+s[i]-'0';
   		divide%=17;
  
}
if(divide)
cout <<"0"<<endl;
else
cout <<"1"<<endl;
}
           
   
   
  return 0; 
   
   
   
}
