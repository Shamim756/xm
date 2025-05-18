#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
   string id;


cout<< "Enter a number: ";
    cin>>id;
    string batch = id.substr(0, 2);
    cout<<"BATCH:"<<batch<<",";
    string dept=id.substr(3, 2);
if(dept=="01"){
    cout<<"DEPERTMENT:"<<"MPE"<<",";
}
else if(dept=="02"){
    cout<<"DEPERTMENT:"<<"EEE"<<",";

}
else if(dept=="03"){
    cout<<"DEPERTMENT:"<<"WEI"<<",";
}
else if(dept=="04"){
    cout<<"DEPERTMENT:"<<"CSEI"<<",";
}

else if(dept=="05"){
  
  
    cout<<"DEPERTMENT:"<<"CSE"<<",";
  
}
else if(dept=="06"){
    cout<<"DEPERTMENT:"<<"BTM"<<",";
}
char sec =  id[id.size() -3];
cout<<"SECTION:"<<sec<<endl;
  
   


    return 0;
}

//same code is another way;

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string id;
    cout << "Enter student ID: ";
    cin >> id;

    // 1) Batch = first two digits
    string batch = id.substr(0, 2);

    // 2) Department code = characters 4 & 5 (0-based indices 3 and 4)
    string deptCodeStr = id.substr(3, 2);
    int deptCode = stoi(deptCodeStr);

    // mapping table
    static unordered_map<int, string> deptMap = {
        {1, "MPE"},
        {2, "EEE"},
        {3, "WEI"},
        {4, "CSE"},
        {5, "CSE"},
        {6, "BTM"}
    };
    string dept = "Unknown";
    if (auto it = deptMap.find(deptCode); it != deptMap.end()) {
        dept = it->second;
    }

    // 3) Section = third digit from the end
    char section = id[id.size() - 3];

    // output
    cout << "Batch: "      << batch
         << ", Department: " << dept
         << ", Section: "    << section
         << "\n";

    return 0;
}
