// Vector is a dynamic array 
// We use vectors because arrays has fix size 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> v; // we did not nedd to menstion size as vector size can be manipilated according 
//     // v.push_back(2);
//     // v.push_back(5);
//     // v.push_back(12);
//     // v.push_back(10);
//     // v.push_back(56);


//      for(int i=0;i<=4;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
    
//     for(int i=0;i<=4;i++){
//         cout<<v[i]<<" ";
//     }
    
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v; // we did not nedd to menstion size as vector size can be manipilated according 
    v.push_back(2);
    v.push_back(5);
    v.push_back(12);
    v.push_back(10);
    v.push_back(56);


    //  for(int i=0;i<=4;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    
    for(int i=0;i<=4;i++){
        cout<<v[i]<<" ";
    }
    
}