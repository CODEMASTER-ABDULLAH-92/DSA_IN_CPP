#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(56);
    v.push_back(84);
    v.push_back(32);
    v.push_back(12);
    v.push_back(43);
    //Now using the For Loop
    for(auto it:v)
    cout<<it<<" ";

// Another Way to decalare and intialize an vector

vector<int> v1 = {1,2,3,4,5};
for(int i =0; i< v1.size(); i++){
    cout<<v1[i]<<" ";
}
return 0;
}