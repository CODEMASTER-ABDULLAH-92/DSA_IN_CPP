// //Firstly Caalculate the length of the string

// #include<iostream>
// using namespace std;
// int getLen(char arr[]){
//     int count =0;
//     for(int i =0; arr[i]!='\0'; i++){
//         count++;
//     }
//     return count;
// }
// //Reverse the string
// void reverse(char arr[], int n){
//     int start =0;
//     int end = n - 1;
//     while (start <= end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// //CheckOut the palindrome

// int checkOutPalindrome(char arr[], int n){
//     int start = 0;
//     int end = n-1;
//     while(start <= end){
//         while (start < end && !((arr[start] >= 'a' && arr[start] || arr[start] >= 'A' && arr[start] <= 'Z'))){
//             start++;
//         }
//         while (start < end && !((arr[end] >= 'a' && arr[end] || arr[end] >= 'A' && arr[end] <= 'Z'))){
//             end--;
//         }

//         if(tolower(arr[start]) == towlower(arr[end])){
//             start++;
//             end--;
//             return 1;
//         }
//         return 0;
//     }
// }
// //Converted the uppercase letter into lower case for Case InSensitivity;
// char toLowerCase(char ch){
//     if(ch >= 'a' && ch<= 'z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// int main(){
// char name[50];
// cout<<"Enter the name:";
// cin.getline(name,200);
// int Length = getLen(name);
// cout<<"Length = "<<Length<<endl;
// //Reverse the String
// reverse(name,Length);
// cout<<"Reversed String: "<<name<<endl;
// //CheckOut palindrome
// int palindrome = checkOutPalindrome(name,Length);
// if(palindrome == 1){
//     cout<<"This is palindrome: "<<name<<endl;
// }
// else{
//     cout<<"This is Not palindrome: "<<name<<endl;
// }
// return 0;
// }

// Adding @40 in a string in whitespaces

// #include <iostream>
// using namespace std;
// string Insert(string str)
// {
//     string temp = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }
// int main()
// {
//     string str = "My name is Abdullah ";
//     string newStr = Insert(str);
//     cout<<newStr<<endl;
//     return 0;

//The Output is given below
// My@40name@40is@40Abdullah@40
// }

//Remove the subString from String
//Input ==>> abchgyrabckfihabc
//Input removedSubsting is "abc"
//Output ==>> hgyrkfih
#include<iostream>
using namespace std;
string removeString(string str,string part){
    while (str.length() != 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
return str;    
}
int main(){
string str = "abchgyrabckfihabc";
string part = "abc";
string returnedString = removeString(str,part);
cout<<returnedString<<endl;
return 0;
}


git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/CODEMASTER-ABDULLAH-92/DSA_IN_CPP.git
git push -u origin main

