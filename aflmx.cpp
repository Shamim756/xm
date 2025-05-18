#include<bits/stdc++.h>
using namespace std;
int main(){
  ifstream Old("number.txt");
  vector<pair<string,int>>V;
  int Books;
  string Course;
  while (Old>>Course>>Books) {
    V.push_back(make_pair(Course,Books));
  }
  Old.close();
  // auto Maximum=max_element(V.begin(),V.end());
  int Max=-1;
  auto Maximum=V.begin();
  for (auto i = V.begin(); i < V.end(); i++) {
    if (i->second>Max) {
      Maximum=i;
    }
  }
  ofstream New("Output.txt");
  New<<Maximum->first<<" "<<Maximum->second<<endl;
  New.close();
  return 0;
}