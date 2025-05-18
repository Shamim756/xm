/*#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>*/
#include<bits/stdc++.h>
   using namespace std;
   int main(){
    string str;
    int a,b,c,d;
    string e,f,g;
    cout<<"enter the sms:";
    getline(cin,str);
    stringstream ss(str);
    ss>>e>>f>>a>>b>>g>>c>>d;
   if((e=="CU")&&(f.size()==3 && g.size()==3)&&(b==d+2)){
        cout<<"1";
   }
        else{
            cout<<"0";
        }
        
        
      
   return 0;
   }
