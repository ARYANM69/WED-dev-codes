//SYNTAX AND DECLERATION OF ARRAY 
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[7]={4,5,6,7,8,9,10};
//   cout<<arr[3];
// }


// Enter roll num of stutent less the 35 marks
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[6];
//   for(int i = 0; i<=5 ; i++){
//     cin>>arr[i];
//   }

//    for(int i = 0; i<=5 ; i++){
//     if(arr[i]<35) cout<<i<<" ";
//    }
// }

//output of the integer and their incides
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[7]={4,5,6,7,8,9,10};
//   for(int i =0 ; i<=6; i++){
//   cout<<endl<<" "<<arr[i]<<" "<<i;
 
// }
// }

// Enter roll num of stutent less the 35 marks witn input
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int marks[n];
//     for(int i = 0 ; i<=n-1 ; i++){
//         cin>>marks[i];
//     }
//     for(int i = 0 ; i<=n-1 ; i++){
//         if(marks[i]<35)cout<<i<<" ";
//     }
    
// }


// how to give output of integer present in an incides 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i]; 
//     }

//    cout<<arr[2];
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i]; 
//         cout<<arr[i];
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
//    int sum;
//    sum = 0;
//     for(int i = 0;i<=n-1;i++){
//         sum += arr[i];
        
//     }
//     cout<<sum;
// }

//


// 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" enter size of the array ";
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<" enter num of the array you want to find ";
//     cin>>x;
//       bool flag = false;
   
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==x) flag = true;
//     }

//     if(flag==true){
//         cout<<" enter x is a interger in array";

//     }
//     else cout<<" enter x is not a interger in array";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" enter size of the array ";
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<=n-1;i++){
//         cout<<"enter the corresponding element of array ";cin>>arr[i];
//     }
//     int x;
//     cout<<" enter num of the array you want to find ";
//     cin>>x;
//       bool flag = false;
   
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==x) flag = true;
//     }

//     if(flag==true){
//         cout<<" enter x is a interger in array";

//     }
//     else cout<<" enter x is not a interger in array";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<" enter size of the array ";
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<=n-1;i++){
//         cout<<"enter the corresponding element of array ";cin>>arr[i];
//     }
//     int x;
//     cout<<" enter num of the  you want to find how many are grearter than this ";
//     cin>>x;
//     int count =0;

//      for(int i =0;i<=n-1;i++){
//        if(arr[i]>x) count = count + 1;
//     }
//    cout<<count;
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
//    for(int i = 0;i<=n-1;i++){
//            if(arr[i]<35)cout<<i<<" ";
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
//    int x;
//     cout<<" the num you want to find how many incides is greater";
//     cin>>x;
//     int count;
//     count = 0;
//     for(int i = 0;i<=n-1;i++){
//        if(arr[i]>x)
//        count = count + 1;

//     } 
//     cout<<count;
    
// }


// BEST METHOD TO FIND GREATEST ELEMENT 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int max = INT_MIN;
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     for(int i =0;i<=n-1;i++){
//         if(max<arr[i]) max = arr[i];
//     }
//    cout<< "The maximum element in the array is "<<max;
// }


// #include<iostream>
// using namespace std;

// void display(int a[],int n){
//     for(int i = 0 ;i<=n - 1; i++){
//         cout<<a[i]<<" ";
//     }
// }
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i = 0 ;i<= n- 1; i++){
//     cin>>arr[i];
//   }
//   display(arr,n);
// }


// INTRO STRINGS ==> Basically character arrays 
// #include<iostream>
// using namespace std;
// int main(){
//     char str[]={'a','b','c'};
//     for(int i = 0; str[i] != '\0';i++){
//         cout<<" "<<str[i]; //==> output is a b c
//     }
//     }

    
//     #include<iostream>
// using namespace std;
// int main(){
//     char str[]={'a','b','c'};
//      cout<<str;  // =[]> output is abc;
//     }


// PASS BY REFERENCE 
// #include<iostream>
// using namespace std;

//     void  swap (int &a , int &b){
//         int temp;
//         temp = a;
//         a = b;
//         b = temp;

//         return;
//     }

//     int main(){
//             int a;
//             int b;
//             cin>>a;
//             cin>>b;
//             swap(a,b);
//             cout<<a<<b;
//     }
            

// PASS BY VALUE
// #include<iostream>
// using namespace std;

//     int add (int a , int b){
//         int add ;
//         add = a + b;

//         return add ;
//     }

//     int main(){
//             int a;
//             int b;
//             cin>>a;
//             cin>>b;
//           int sum = add(a,b);
//           cout<<sum;
            
//     }



//PASS BY VALUE // Another way of swaping the number by just running the code of function 
// #include<iostream>
// using namespace std; 

//     void  swap (int a , int b){
//         int temp;
//         temp = a;
//         a = b;
//         b = temp;
//         cout<<a<<b;
//         return;
//     }

//     int main(){
//             int a;
//             int b;
//             cin>>a;
//             cin>>b;
            
//             swap(a,b);

//     }


// POINTERS ARTHEMATIC 



// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     a = 15;
//     int * p = &a;
//    int b = (*p)++;
//     cout<<a<<" "<<b; // OUTPUT = 16 15
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     a = 15;
//     int * p = &a;
//    int b = ++(*p);
//     cout<<a<<" "<<b; // OUTPUT = 16 16
// }


// TO FIND THE SECOND MAX ELEMENT IN A ARRAY 

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];

//     }

//     int max = INT_MIN;

//     for(int i = 0;i<=n-1;i++){
//        if(max<arr[i])  max = arr[i];

//     }

//     cout<<" The max value in the array is : ";
//     cout<<max<<endl;

//     int smax = INT_MIN;
//   for(int i = 0;i<=n-1;i++){
//        if(  arr[i] != max && smax<arr[i])  smax = arr[i];

//     }
//     cout<<" The second max value in the array is : ";
//     cout<<smax<<endl;

// }


// #include<iostream>
// using namespace std;
// int main(){

//         int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
// int count = 0;
//   for(int i = 0;i<=n-1;i++){
//         if(x<arr[i]) count = count + 1;
//     }

//     cout<<count;
    
// }

// for printing the num pattern cout<< the indices of  the second loop used 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1 ; i<=n;i++){
//         for(int j = 1 ; j<=i;j++)
//         cout<<j;
//         cout<<endl;
//     }
    
// }
 


// for printing the num pattern cout<< the indices of  the second loop used 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     for(int i = 1 ; i<=n;i++){
//         for(int j = 1 ; j<=m;j++)
//         cout<<j;
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>> n;
// int count = 0;
// int a = n;
// while(n>0){
//  n = n/10;
//    count = count + 1;
// }
  

// if(a==0)cout<<"1";
// else cout<<count;


// }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>> n;
// int sum = 0;
// while(n>0){
//  int lastdigit= n%10;
//    sum = sum + lastdigit;
//    n = n/10;
// }
  


//  cout<<sum;


// }


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>> n;
// int sum = 0;
// while(n>0){
//  int lastdigit= n%10;
//    sum = sum + lastdigit;
//    n = n/10;
// }
  


//  cout<<sum;


// }


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>> n;
// int reverse;
// while(n>0){
//  int lastdigit= n%10;
//    reverse = reverse * 10;
//    reverse += lastdigit;
//    n = n/10;
// }
  


//  cout<<reverse;


// }


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>> n;
// int fact = 1;
// for(int i = n;i>=2;i--){
//      fact = fact*i;
// }
  

// if(n==0||n==1)cout<<"The factorial is : 1";

// else cout<<"The factorial is :"<<fact;


// }


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>> n;
// int fact = 1;
// for(int i = 1;i<=n;i++){
//      fact = fact*i;
// }
  


//  cout<<fact;


// } 

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int a =1;
//   int b =1;
//   int sum = 1;
//   for(int i =1;i<=n-2;i++){
//     sum = a + b;
//     a = b;
//     b = sum;
//   }

//   cout<<sum;

// }


// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//  bool flag = false;
//  for(int i = 2;i<=n-1;i++){
//     if(n%i==0) flag = true;
//  }

//  if(n==0||n==1)cout<<"Neither prime or composite ";
//  else if(flag == false) cout<<n<<" is a prime number ";
//  else cout<<n<<" is a composite number ";



//}


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a =1;
// int b =1;
// int sum =1;
// for(int i=1;i<=n-2;i++){
//     sum = a+b;
//     a = b;
//     b = sum;
// }
// cout<<sum;
// }

#include<iostream>
using namespace std;
int main(){
    float d;
    cout<<2/7;
}

