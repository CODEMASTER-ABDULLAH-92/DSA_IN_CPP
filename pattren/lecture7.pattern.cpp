// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

//#include<iostream>
// using namespace std;
// int main(){
//  for(int row = 1; row<=5; row++){
//     for(int col = 1; col<=row; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 1; row <=5; row++){
//     for(int col = 1; col<=row; col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 1; row<=5; row++){
//     for(int col = 1; col<=row; col++){
//         cout<<row<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }


// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 
// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 1; row<=5; row++){
//     for(int col= row; col>=1; col--){
//         cout<<col<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }

// a 
// b b 
// c c c 
// d d d d 
// e e e e e 
// #include<iostream>
// using namespace std;
// int main(){
//  for(char row = 'a'; row<='e'; row++){
//     for(char col = 'a'; col<=row;col++){
//         cout<<row<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }

// * * * * * 
// * * * * 
// * * * 
// * * 
// *

// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 1; row<=5; row++){
//     for(int col = 5; col>=row; col--){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }



// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4 
// 5

// #include<iostream>
// using namespace std;

// int main() {
//     for (int row = 1; row <= 5; row++) {          // Loop for rows
//         for (int col = 5; col >= row; col--) {    // Inner loop to print stars
//             cout << row <<" ";
//         }
//         cout << endl;                             // Move to the next line after each row
//     }
//     return 0;
// }


// 5 5 5 5 5 
// 4 4 4 4 
// 3 3 3 
// 2 2 
// 1 
// #include<iostream>
// using namespace std;

// int main() {
//     for (int row = 5; row >= 1; row--) {         // Loop for rows from 5 to 1
//         for (int col = 1; col <= row; col++) {   // Inner loop to print digits
//             cout << row<<" ";                         // Print the current row number
//         }
//         cout << endl;                            // Move to the next line after each row
//     }
//     return 0;
// }

// 5 4 3 2 1 
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5 


// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 1; row<=5; row++){
//     for(int col = 5; col>=row; col--){
//         cout<<col<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }

// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 4; row>=1; row--){
//     for(int col = 1; col<=row; col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }


// 3
// 3 2 
// 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 1; row<=5; row++){
//     for(int col = 1; col<=row; col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int rows = 3; // Number of rows for the pattern

//     for (int row = 1; row <= rows; row++) {
//         for (int col = row; col >= 1; col--) {
//             cout << col << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 

// #include <iostream>
// using namespace std;

// int main() {

//     for (int row = 1; row <= 5; row++) {
//         for (int col = 5; col >= 6 - row; col--) {
//             cout << col << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
