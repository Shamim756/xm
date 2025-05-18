#include<bits/stdc++.h>
using namespace std;
int main(){
  int Keys;
  cout<<"Enter The Number of Keys: ";
  cin>>Keys;
  int Table_Size;
  cout<<"Enter The Table Size: ";
  cin>>Table_Size;
  map<int,int>MP;
  for (int i = 0; i < 6; i++) {
    int N;
    cin>>N;
    int Key=N%Table_Size;
    if (MP.find(Key) == MP.end()) {
      MP[Key]=N;
    }
    else{
      Key=(N+1) % Table_Size;
      if (MP.find(Key)==MP.end()) {
        MP[Key]=N;
      }
      else{
        Key=(N+1+1) % Table_Size;
        MP[Key]=N;
      }
    }
  }
  for (auto it = MP.begin(); it != MP.end(); it++) {
    cout<<it->first<<" "<<it->second<<endl;
  }
  return 0;
}