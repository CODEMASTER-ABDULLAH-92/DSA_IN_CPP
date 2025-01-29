//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 

// #include<iostream>
// using namespace std;
// int main(){
//     int n =5;
//     for(int row = 1; row<=5; row++){
//         for(int col = 1; col<= n - row; col++){
//             cout<<"  ";
//         }
//         for(int col = 1; col<=row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }   
// return 0;
// }


//       1 
//     2 2 
//   3 3 3 
// 4 4 4 4 

// #include<iostream>
// using namespace std;
// int main(){
//  int n = 4;
//  for(int row = 1; row<=n; row++){
//     for(int col = 1; col<= n - row; col++){
//         cout<<"  ";
//     }
//     for(int col = 1; col<=row; col++){
//         cout<<row<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }


//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 

// #include<iostream>
// using namespace std;
// int main(){
//  for(int row = 1; row<=5; row++){
//     for(int col = 1; col<= 5 - row; col++ ){
//         cout<<"  ";
//     }
//     for(int col = 1; col<=row; col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }



// A 
// B A 
// C B A 
// D C B A 
// E D C B A 


// ============== Code is Pending for this Pattren 











// Take Notice from lecture 


//           1 
//         1 2 1 
//       1 2 3 2 1 
//     1 2 3 4 3 2 1 
//   1 2 3 4 5 4 3 2 1 
// 1 2 3 4 5 6 5 4 3 2 1 

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 6;
//  for(int row = 1; row<= n; row++){
//     for(int col = 1; col<= n - row; col++){
//         cout<<"  ";
//     }
//     for(int col = 1; col <= row; col++){
//         cout<<col<<" ";
//     }
//     for(int col = row ; col  > 1; col--){
//         cout<<col - 1<<" ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }






//Checks with ChatGpt is this code correct

// * * * * * * * * * * * * * * * * * * * * 
// * * * * * * * * *     * * * * * * * * * 
// * * * * * * * *         * * * * * * * * 
// * * * * * * *             * * * * * * * 
// * * * * * *                 * * * * * * 
// * * * * *                     * * * * * 
// * * * *                         * * * * 
// * * *                             * * * 
// * *                                 * * 
// *                                     * 







// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//     cout<<"Enter the Number: ";
//     cin>>n; //For N 10;

//  for(int row = 1; row<=n; row++){
//     for(int col = n; col >= row; col--){
//         cout<<"* ";
//     }
//     for(int col = 1; col<=row - 1; col++){
//         cout<<"  ";
//     }
//     for(int col = 1; col<=row - 1; col++){
//         cout<<"  ";
//     }
//     for(int col = n; col>=row; col--){
//         cout<<"* ";
//     }
//     cout<<endl;
//  } 
// return 0;
// }



// * * * * * * * * * * * * * * * * * * * * 
// * * * * * * * * *     * * * * * * * * * 
// * * * * * * * *         * * * * * * * * 
// * * * * * * *             * * * * * * * 
// * * * * * *                 * * * * * * 
// * * * * *                     * * * * * 
// * * * *                         * * * * 
// * * *                             * * * 
// * *                                 * * 
// *                                     * 
// *                                     * 
// * *                                 * * 
// * * *                             * * * 
// * * * *                         * * * * 
// * * * * *                     * * * * * 
// * * * * * *                 * * * * * * 
// * * * * * * *             * * * * * * * 
// * * * * * * * *         * * * * * * * * 
// * * * * * * * * *     * * * * * * * * * 
// * * * * * * * * * * * * * * * * * * * * 



// #include<iostream>
// using namespace std;
// int main(){
// int n;
//     cout<<"Enter the Number: ";
//     cin>>n; //For N 10;

//  for(int row = 1; row<=n; row++){
//     for(int col = n; col >= row; col--){
//         cout<<"* ";
//     }
//     for(int col = 1; col<=row - 1; col++){
//         cout<<"  ";
//     }
//     for(int col = 1; col<=row - 1; col++){
//         cout<<"  ";
//     }
//     for(int col = n; col>=row; col--){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }  
//  for(int row = 1; row<= n; row++){
//     for(int col = 1; col<= row; col++){
//         cout<<"* ";
//     }
//     for(int col = n; col> row; col--){
//         cout<<"  ";
//     }
//     for(int col = n; col> row; col--){
//         cout<<"  ";
//     }
//     for(int col = 1; col<= row; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  } 
// return 0;
// }



// *                                     * 
// * *                                 * * 
// * * *                             * * * 
// * * * *                         * * * * 
// * * * * *                     * * * * * 
// * * * * * *                 * * * * * * 
// * * * * * * *             * * * * * * * 
// * * * * * * * *         * * * * * * * * 
// * * * * * * * * *     * * * * * * * * * 
// * * * * * * * * * * * * * * * * * * * * 
// * * * * * * * * * * * * * * * * * * * * 
// * * * * * * * * *     * * * * * * * * * 
// * * * * * * * *         * * * * * * * * 
// * * * * * * *             * * * * * * * 
// * * * * * *                 * * * * * * 
// * * * * *                     * * * * * 
// * * * *                         * * * * 
// * * *                             * * * 
// * *                                 * * 
// *                                     * 


// #include<iostream>
// using namespace std;
// int main(){
//  int n = 10;
//  for(int row = 1; row <= n; row++){
//     for(int col = 1; col<= row; col++){
//         cout<<"* ";
//     }
//     for(int col = n; col > row; col--){
//         cout<<"  ";
//     }
//     for(int col = n; col> row; col--){
//         cout<<"  ";
//     }
//     for(int col = 1; col<=row; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }
//  for(int row = 1; row<= n; row++){
//     for(int col = n; col>= row; col--){
//         cout<<"* ";
//     }
//     for(int col = 1; col < row; col++){
//         cout<<"  ";
//     }
//     for(int col = 1; col< row; col++){
//         cout<<"  ";
//     }
//     for(int col = n; col>=row; col--){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }   
// return 0;
// }