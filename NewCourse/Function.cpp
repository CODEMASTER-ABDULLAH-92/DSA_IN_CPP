
// //Pass by value
// #include<iostream>
// using namespace std;
// int incre(int n){
// return  ++n;
// }
// int main(){

//  int a = 10;
// int ans = incre(a);
// cout<< ans<<endl; // 11
// cout<<a<<endl; // 10 this is not changed 
// return 0;
// }



//Pass by Reference
#include<iostream>
using namespace std;
int incre(int &n){
return  ++n;
}
int main(){

 int a = 10;
int ans = incre(a);
cout<< ans<<endl;  //11
cout<<a<<endl; //11
return 0;
}