// #include<iostream>
// using namespace std;
// int main(){
//     int x =5;
//     cout<<&x<<endl; // gives the address            // ==> datatypr must be same of the variable x whose addres is beign stored 
//     int *p = &x; // p will strore the address of x; // datatype * Nmae of pointer 
//     cout<<p;

// }

// int initialization * p refer to the pointer storing address after that *p refer to the value and p refer to the address of that value 



// #include<iostream>
// using namespace std;
// int swap(int *p1,int *p2){
//     int temp ;
//      temp = *p1;
//      *p1 = *p2;
//      *p2 = temp;

// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int *p1 = &a;
//     int *p2 = &b;
//     swap(p1,p2);
//     cout<<a<<" ";
//     cout<<b<<" ";

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 5;
//     int b = a++;
//     cout<<a<<" "<<b;  == > 6 5

// }


// int main(){
//     int a = 5;
//     int *ptr = &a;
//     int b = (*ptr)++;
//     cout<<a<<" "<<b;//  == > 6 5

// }



// int main(){
//     int a = 5;
//     int *ptr = &a;
//     int b = ++(*ptr);
//     cout<<a<<" "<<b;//  == > 6 6

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int last = n%10;
//     int first;
//     if(n>9){
//     while (n>9){
//     n = n/10;
//     }
    
//     first = n;
// }
//   else{
//     first = n;
//   }

//    cout<<first<<" "<<last;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     int last = n % 10;
//     int first;

//     // Ensure n is greater than or equal to 10
//     if (n >= 10) {
//         // Find the first digit
//         while (n >= 10) {
//             n /= 10;
//         }
//         first = n;
//     } else {
//         first = n; // If n is a single-digit number, first and last are the same
//     }

//     cout << first << " " << last << endl;
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n = 6;
    
//    int *ptr = &n;
//    int **p = & ptr;
//    cout<<&ptr<<" "<<**p<<" "<<*ptr<<" "<<ptr<<" "<<p;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<=n-1;i++){
//         cin>>arr[i];
//     }

//      for(int i =0;i<=n-1;i++){
//         cout<<arr[i]<<" ";
//     }
    // int *p1 = arr;
    // int *p2 = &arr[0];
    // cout<<p1<<" "<<p2;
//}





// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int arr[n][m];
//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//         cin>>arr[i][j];
//     }
//     }

//     int max = INT_MIN;

//      for(int i =0;i<=n-1;i++){
//             for(int j =0;j<=m-1;j++){
//         if(max<arr[i][j])  max = arr[i][j];
//     }
   
// }

//  cout<<max;
//     }



// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int arr[n][m];
//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//         cin>>arr[i][j];
//     }
//     }

//     int sum = 0;

//      for(int i =0;i<=n-1;i++){
//             for(int j =0;j<=m-1;j++){
//         sum = sum + arr[i][j];
//     }
   
// }

//  cout<<sum;
//     }




// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int arr[n][m];
//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//         cin>>arr[i][j];
//     }
//     }


//   int brr[n][m];
//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//         cin>>brr[i][j];
//     }
//     }
   

//      for(int i =0;i<=n-1;i++){
//             for(int j =0;j<=m-1;j++){
//         brr[i][j] = arr[i][j] + brr[i][j];
//     }
   
// }
//   for(int i =0;i<=n-1;i++){
//             for(int j =0;j<=m-1;j++){
//        cout<< brr[i][j]<<" ";
//     }
//     cout<<endl;
   
// }
//     }





// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int arr[n][m];
//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//         cin>>arr[i][j];
//     }
//     }

  

//      for(int j =0;j<=m-1;j++){
//             for(int i =0;i<=n-1;i++){
//         cout<< arr[i][j]<<" ";
//     }
//    cout<<endl;
// }


//     }


// #include<iostream>
// using namespace std;
// int main(){
//     char arr[5];
//     for(int i = 0;i<=4;i++){
//       cin>>arr[i];
//     }

//     for(int i = 0;i<=4;i++){
//         cout<<arr[i]<<" ";
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];
//     }
   
   
// for(int i = 0;i<=n-1;i++){
//         if(arr[i]<35)  cout<<i<<" ";
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int sum = 0;
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     for(int i = 0;i<=n-1;i++){
//         sum = sum + arr[i];
//     }

//     cout<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
   
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     bool flag = false;
//     for(int i = 0;i<=n-1;i++){
//       if(arr[i]==x) flag = true;
//     }

//     if(flag == true) cout<<" Element is present ";
//     else cout<<" element is not present ";



    
// }



// #include<iostream>
// #include<limits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     int max = INT_MIN;
//     for(int i = 0 ; i<=n-1 ;i++){
//         cin>>arr[i];
//     }

//     for(int i = 0;i<=n-1;i++){
//        if(max < arr[i])  max = arr[i];
//     }
  

//    cout<<max;

// }




// #include<iostream>
// #include<limits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

   
//     for(int i = 0 ; i<=n-1 ;i++){
//         cin>>arr[i];
//     }

//     int max = INT_MIN;
//     for(int i = 0;i<=n-1;i++){
//        if(max < arr[i])  max = arr[i];
//     }
  

//     int max2 = INT_MIN;
// for(int i = 0;i<=n-1;i++){
//        if( arr[i] !=max && max2 < arr[i] )  max2 = arr[i];
//     }


//     cout<<max<<" "<<max2;
// }



// #include<iostream>
// #include<limits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

  
//     for(int i = 0 ; i<=n-1 ;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     int count = 0;

//     for(int i = 0;i<=n-1;i++){
//        if(x < arr[i])  count = count + 1;
//     }
  

//    cout<<count;

// }



// 2D ARRAYS

//Transerval through 2-D array 
// #include<iostream>
// using namespace std;
// int main(){

//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];

//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }
    

//      for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
    
//     }





// #include<iostream>
// #include<limits>
// using namespace std;
// int main(){

//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];

//     int max = INT_MIN;

//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }
    

//      for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             if(max<arr[i][j]) max = arr[i][j];
//         }
       
//     }
    
//     cout<<max;
//     }


// #include<iostream>
// #include<limits>
// using namespace std;
// int main(){

//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];

//     int max = INT_MIN;
//     int smax = INT_MIN;

//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }
    

//      for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             if(max<arr[i][j]) max = arr[i][j];
//         }
       
//     }


//       for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             if(arr[i][j]  != max && smax <arr[i][j]) smax = arr[i][j];
//         }
       
//     }
    
//     cout<<smax;
//     }


// #include<iostream>
// using namespace std;
// int main(){

//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];

//     int sum =0;

//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }
    

//      for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             sum = sum + arr[i][j];
//         }
       
//     }


    
//     cout<<sum;
//     }


// #include<iostream>
// using namespace std;
// int main(){

//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];

//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }
    

// int brr[n][m];


//    for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             cin>>brr[i][j];
//         }
//     }
    

//        for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             brr[i][j]= arr[i][j] + brr[i][j];
//         }
//     }

//        for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//              cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
   
//     }


// #include<iostream>
// using namespace std;
// int main(){

//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];

//     for(int i =0;i<=n-1;i++){
//         for(int j =0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }
    

//      for(int j =0;j<=m-1;j++){
//         for(int i =0;i<=n-1;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
    
//     }



// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i =0;i<=n-1;i++){
//        for(int j =0;j<=m-1;j++) {
//         cin>>arr[i][j];
//        }
//     }


// int p,q;
//     cin>>p>>q;
//     int brr[p][q];
//     for(int i =0;i<=p-1;i++){
//        for(int j =0;j<=q-1;j++) {
//         cin>>brr[i][j];
//        }
//     }

// int res[n][q];
 
    
//     for(int i =0;i<=n-1;i++){
//        for(int j = 0;j<=q-1;j++) {
//         res[i][j] = 0;
//         for(int k = 0;k<=m-1;k++){
//         res[i][j] = res[i][j] + arr[i][k] * brr[k][j];
//         }
//        }
//     }

// for(int i =0;i<=n-1;i++){
//        for(int j =0;j<=q-1;j++) {
//         cout<<res[i][j]<<" ";
//        }
//        cout<<endl;
//     }



// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max1 = INT_MIN;
    
}