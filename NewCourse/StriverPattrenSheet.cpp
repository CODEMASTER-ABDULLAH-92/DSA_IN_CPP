// Pattren NO 1
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// #include<iostream>
// using namespace std;
// int main(){
//     for(int row = 1; row<=5; row++){
//         for(int col = 1; col<=5; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// return 0;
// }



// Pattren 2
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// #include<iostream>
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

// Pattren 3

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
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

// Pattren 4
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

// Pattren 5 
// * * * * * 
// * * * * 
// * * * 
// * * 
// *
// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 5; row>=1; --row){
//     for(int col = 1; col<=row; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }

// pattren 6
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1
// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 5; row>=1; --row){
//     for(int col = 1; col<=row; col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }



// Pattren 7

//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 

// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 1; row<=5; row++){
//     for(int col = 1; col <= 5 - row; col++){
//         cout<<"  ";
//     }
//     for(int col = 1; col<=row; col++){
//         cout<<"* ";
//     }
//     for(int col = 1; col<=row - 1; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }

// Pattren 8
//   * * * * * * * * * 
//     * * * * * * * 
//       * * * * * 
//         * * * 
//           * 
// #include<iostream>
// using namespace std;
// int main(){
//  for(int row =1; row<=5; row++){
//     for(int col = 1; col<=row; col++){
//         cout<<"  ";
//     }
//     for(int col = 5; col>=row; col--){
//         cout<<"* ";
//     }
//     for(int col = 4; col >= row; col--){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }