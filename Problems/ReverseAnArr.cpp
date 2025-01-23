// #include<iostream>
// #include<vector>
// using namespace std;
// // vector<int> &v
// void printArr(vector<int> &v, int n){
//     for(int i =0; i< n; i++){
//         cout<<v[i]<<" ";
//     }
// }
// void reverseArr(vector<int> &v, int n){
//     int start = 0;
//     int end = n-1;
//     while (start <= end)
//     {
//         swap(v[start], v[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
// vector<int> v;
// v.push_back(4);
// v.push_back(42);
// v.push_back(1);
// v.push_back(76);
// v.push_back(33);
// v.push_back(89);
// reverseArr(v, v.size());
// printArr(v,v.size());
// return 0;
// }



// Descending sorting ====================>>>>>>>

// #include<iostream>
// #include<vector>
// using namespace std;
// void printArr(vector<int> &v, int n ){
//     for(int i =0; i< n; i++){
//         cout<<v[i]<<" ";
//     }

// }
// void sorting(vector<int> &v, int n){
//  int maxValu = INT_MIN;
//     for(int i = 0; i < n - 1; i++){
//         for( int j = 0; j < n - 1- i; j++){
//             if(v[j] < v[j+1]){
//                 swap(v[j],v[j+1]);
//             }
//         }
//     }
    
// }
// int main(){
// vector<int> v;
// v.push_back(32);
// v.push_back(74);
// v.push_back(21);
// v.push_back(94);
// v.push_back(222);
// v.push_back(93);
// v.push_back(4);
// sorting(v,v.size());
// printArr(v,v.size());
// return 0;
// }


 


#include <iostream>
#include <vector>
#include <utility> // For std::pair
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

pair<int, int> minmax(vector<int> &v, int n) {
    if (v.empty()) {
        throw runtime_error("Vector is empty!");
    }

    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
        if (v[i] > max) {
            max = v[i];
        }
    }
    return make_pair(min, max); // Use make_pair instead of brace initialization
}

int main() {
    vector<int> v;
    v.push_back(83);
    v.push_back(32);
    v.push_back(54);
    v.push_back(75);
    v.push_back(3);
    v.push_back(553);
    v.push_back(4);
    v.push_back(35);

    try {
        pair<int, int> mm = minmax(v, v.size());
        cout << "Min = " << mm.first << endl;
        cout << "Max = " << mm.second << endl;
    } catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}