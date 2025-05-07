// #include<iostream>
// using namespace std;
// int main(){
// for(int i =10; i>=1; i--){
//     cout<<i<<" ";
// }
// return 0;
// }

// print the series like 1 4 7 10
// #include<iostream>
// using namespace std;
// int main(){
// for(int i =1; i<=100; i= i+3){
//     cout<<i<<" ";
// }
// return 0;
// }

// Table of 6
//  #include<iostream>
//  using namespace std;
//  int main(){
//  for(int i = 1; i<=10; i++ ){
//      cout<<" 6 * "<<i<<" = "<<6*i<<" "<<endl;
//  }
//  return 0;
//  }

// Even Or Odd
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int num;
//  cout<<"Enter the Number: ";
//  cin>>num;
//  if (num % 2 == 0)
//  {
//      cout<<num<<" is the Even Number: ";
//  }
//  else
//  {
//      cout<<num<<" is the Odd Number: ";
//  }
//  return 0;
//  }

// Power of the Number:
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int pow,number,store;
//  cout<<"Enter the Number: ";
//  cin>>number;
//  cout<<"Enter the Power: ";
//  cin>>pow;

// store = number;
// for(int i = 1; i<pow; i++){
//     store = store*number;
// }
// cout<<"Power: "<<store<<endl;
// return 0;
// }

// Sum of N numbers

// #include<iostream>
// using namespace std;
// int main(){
// int sum, number;
// sum = 0;
// cout<<"Enter the Number:";
// cin>>number;
// for(int i =0; i<=number; i++){
// sum = sum + i;
// }
// cout<<"Sum: "<<sum;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int number,fact;
// cout<<"Enter the Number: ";
// cin>>number;
// fact = 1;
// for(int i =1; i<=number; i++){
//     fact = fact*i;
// }
// cout<<"Fact = "<<fact<<" ";
// return 0;
// }

// Prime Number

// #include<iostream>
// using namespace std;
// int main(){
// int number;
// cout<<"Enter the Number: ";
// cin>>number;
// if(number < 2){
//     cout<<number<<" is Not Prime Number: ";
//     return 0;
// }
// else{
//     for(int i = 2; i < number; i++){
//         if(number % i == 0){
//             cout<<number<<" is Not Prime Number: ";
//             return 0;
//         }
//     }
//     cout<<number<<" is Prime Number: ";
// }
// return 0;
// }

// Print the Alphabets

// #include<iostream>
// using namespace std;
// int main(){
// for( char ch = 'A'; ch<= 'Z'; ch++){
//     cout<<ch<<" ";
// }
// return 0;
// }

// Reverse the counting

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 10; i>=0; --i){
//         cout<<i<<endl;
//     }
// return 0;
// }

// Fabconi series

// #include <iostream>
// using namespace std;
// int main()
// {
//     int last = 0;
//     int prev = 1;
//     int curr;
//     int number = 6;
//     if (number >= 1)
//     {
//         cout << last << " ";
//     }
//     if (number >= 2)
//     {
//         cout << prev << " ";
//     }

//     for (int i = 3; i <= number; i++)
//     {
//         curr = prev + last;
//         cout << curr << " ";
//         last = prev;
//         prev = curr;
//     }
//     return 0;
// }
