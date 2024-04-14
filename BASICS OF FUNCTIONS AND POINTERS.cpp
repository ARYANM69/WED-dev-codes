// POINTERS
// SIZE OF (OPERATOR) USE
// #include<iostream>
// using namespace std;
// int main(){

// sizeof(operator)==> tells the bytes(1 byte = 8 bits) accuired by an data type or an object (object like arr should be declared first );
// sizeof(int) is possible that tells how much bytes accuried by an data type 
//   cout<<sizeof(char);
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i = 0; i<=n-1 ;i++){
//     cin>>arr[i];
//   }
//   cout<<sizeof(arr);

// int a = 45;
// cout<<sizeof(a); //==> output = 4

// long long a = 45;
// cout<<sizeof(a);  //==> output = 8


// }

//1 byte = 8 bits ( 1 byte 2^8 characters can be stored)
//4 bytes = 32 bits ( 2^32 integer can be stores)


// #include<iostream>
// using namespace std;
// int main(){
 // int x;
  // x = 9;

  // cout<<" Address "<<&x;

  // int arr[2];
  //   cout<<" Address "<<&arr;

  // int arr[3]= {45,34,67};
  //   cout<<" Address "<<&arr;

//  int arr[3]= {45,34,67};
    // cout<<&arr[0]<<" "; // => in c++  cout<<arr; cout<<&arr[0]==> gives the adress of the first element of the indices (i.e arr[0])
    //  cout<<arr;   // array has the same memory address of its firest indies i.e arr[0] element address 
// }


// #include<iostream>
// using namespace std;
// int main(){
//  int x;
//   x = 9;
//   cout<< &x;
// }

// & is use to print address of a variable whose data type is predefined 

// #include<iostream>
// using namespace std;
// int main(){
//  char x;
//   x = 'b';
//   cout<<&x;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int x = 4;
//   int* p = &x;
//   cout<<&x<<" "<<p;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   float x = 4.69;
//  float* p = &x;
//   cout<<&x<<" "<<p;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   bool x = false;
//  bool* p = &x;
//   cout<<x<<" "<<&x<<" "<<p;  //  0 0xeab2dff987 0xeab2dff987 <== (output)
// }


// #include<iostream>
// using namespace std;
// int main(){
//  int x = 6;
//  int y = 7;
//  int *p1 = &x, *p2 = &y;


   
//    cout<<*p1<<" "<<*p2;
// }



// pattern star square
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i = 1;i<=n;i++){
//     for(int j = 1; j<=n;j++){
//       cout<<"*";
//     }
//     cout<<endl;     // output ****       for n = 4;                   
//   }                           ****
// }                             ****
//                               ****



// pattern star rectangle
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
// int m;
// cin>>m;
//   for(int i = 1;i<=n;i++){
//     for(int j = 1; j<=m;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

//   output for n = 5, m= 7 is 
        // *******
        // *******
        // *******
        // *******
        // *******


// pattern star triangle
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i = 1;i<=n;i++){
//     for(int j = 1; j<=i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

// output for n = 5;
// ==>   *
//       **
//       ***
//       ****
//       ***** 

// pattern star triangle reverse 
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i = 1;i<=n;i++){
//     for(int j = 1; j<=n+1-i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

// #include<iostream>
// using namespace std;

// int x = 78 ; // global variable all functions can accses this
// int sum(int a, int b){
//   int sum = a + b;
//   return sum;
// }
// int main(){
//   int a;
//   cin>>a;
//   int b;
//   cin>>b;
//  cout<<sum(a,b);
// int z = 69; // local variable ==> only those function acces them in which it lies
// }




// #include<iostream>
// using namespace std;

// void swap(int &a,int &b){
//   int temp;
//   temp = a;
//   a = b;
//   b = temp;
//  return;
// }
// int main(){
//   int a;
//   cin>>a;
//   int b;
//   cin>>b;
//   swap(a,b);
//  cout<<a<<" "<<b;
// }


// #include<iostream>
// using namespace std;

// int main(){
//   int b;
//    b = 45;
//    int* a = &b;
//    cout<<*a;
// }


//DEREFERENCE operator 
// #include<iostream>
// using namespace std;

// int main(){
//   int x = 122;
//   int *p = &x;
//   cout<<*p<<" "<<p;
  //*p==> dereferance operator        p==> show the address
  // output ==> 122    0x81eb9ffd64
// }


// #include<iostream>
// using namespace std;

// int main(){
//   int x = 122; int y = 10;
  
//   int *p = &x ,  *p2 = &y;
//   cout<<p<<" "<<p2;

 
// }

// #include<iostream>
// using namespace std;
// void swap(int &a,int&b){
//   int temp;
//   temp = a;
//   a = b;
//   b = temp;
//   return;
// }
// int main(){
// int a,b;
// cin>>a>>b;
// swap(a,b);
// cout<<a<<b; 
// }

// #include<iostream>
// using namespace std;
// int main(){
// int a,b;
// cin>>a>>b;
//  a = a+b;
//  b = a-b;
//  a = a-b;
// cout<<a<<b; 
// }

// #include<iostream>
// using namespace std;
// void find(int n, int* ptr1, int* ptr2){
//    *ptr1 = n%10;
//   while(n>9){
//     n/10;
//   }
//    *ptr2 = n;
//    return;
// }
// int main(){
//   int n;
//   cin>>n;
//   int lastdigit;
//   int firstdigit;
//   int *ptr1 = &lastdigit;
//   int *ptr2 = &firstdigit;
//   find(n,ptr1,ptr2);
//   cout<<firstdigit<<" "<<lastdigit;
// }

// NULL POINTER // ASCII value is zero 

// #include<iostream>
// using namespace std;
// int main(){
//   int *ptr = NULL;
//   int *ptr2;
//   cout<<&ptr<<" "<<ptr<<" "<<ptr2;   //  ==>  0x79a7bffcb0    0       0x10
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int *ptr ;
//   int *ptr2;
//   cout<<&ptr<<" "<<ptr<<" "<<ptr2;   //  ==>   0x41b21ff880   0x147958914e0   0x10
// }


// DOUBLE POINTER 
// #include<iostream>
// using namespace std;
// int main(){
// int x = 5;
// int *p = &x;
// int **p2 = &p;
// cout<<p2<<" "<<&p<<" "<<**p2;
// }


