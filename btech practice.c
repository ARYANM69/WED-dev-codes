// #include<stdio.h>
// int main(){

//     int x;
//     x = 5;
//     printf("%p",&x);//%p se address print hota h in c language 


// }

// #include<stdio.h>
// int main(){

//     int x;
//     x = 5;
//     int * p ;
//     p = &x; //*p from next line of decleration means the change in the main value of x; 

//     printf("%p\n",p);//%p se address print hota h in c language 
//       printf("%d",*p);// gives the vale which is present in the location of x i.e ==>5;

// }


// #include<stdio.h>

// void swap (int &a , int &b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     return ;
// }
// int main(){
// int a ;
// scanf("%d",&a);
//  int b ;
// scanf("%d",&b);  
// swap(a,b);
// printf("%d %d",a,b);

// }


// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
// int arr[n];
// for(int i = 0; i<=n-1;i++){
//     scanf("%d",&arr[i]);
// }

// for(int i = 0; i<=n-1;i++){
//     printf("%d ",arr[i]);
// }


// }

// #include<stdio.h>
// int main(){
//     int arr[5]={5,6,7,8,9};
//     printf("%d",arr[1]);
// }

// #include<stdio.h>
// int main(){
//     int arr[5]={5,6,7,8,9};   
//     printf("%p\n",&arr[0]);    //000000e557dffc50
//      printf("%p\n",&arr);     // 000000e557dffc50
//       printf("%p",&arr[1]);   //000000e557dffc54
// }

// INput and output of array 
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }

//       for(int i = 0;i<=n-1;i++){
//         printf("%d ",arr[i]);
        
//     }
//     printf("\n");
//      for(int i = 0;i<=n-1;i++){
//         printf(" %d ",i);
        
//     }

// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }


//        for(int i = 0;i<=n-1;i++){
//           if(arr[i]<35){
//         printf("%d ",i);
//   }  
// }
// }

// #include<stdio.h>
// int main(){

//     int arr[] ={34,56,78,90,76,45,34,23,12,344,56};

//       int size = sizeof(arr)/sizeof(arr[4]);

//       printf("%d ",size);

// }

//Memory allocation of array 


// #include<stdio.h>
// int main(){

//     int arr[5] ;
//     printf(" %p ",&arr);
//      printf(" %p ",&arr[0]);
//       printf(" %p ",&arr[1]);
//        printf(" %p ",&arr[2]);
//         printf(" %p ",&arr[3]);
//          printf(" %p ",&arr[4]);             //arr[0]         //arr[1]          //arr[2]           //arr[3]          //arr[4]
//indices wise output==>000000e2eb1ffd80  000000e2eb1ffd80  000000e2eb1ffd84  000000e2eb1ffd88  000000e2eb1ffd8c  000000e2eb1ffd90 
 // location of array is as same as its first element i.e arr[0];

// }

// sum of elements of arr; 
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }
// int sum = 0;

//        for(int i = 0;i<=n-1;i++){
//           sum = sum + arr[i];
//   }  

//   printf(" sum of the elements in the array is : %d  ",sum);
// }



//  LINEAR SEARCH 
// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//   int n;
//   printf("Enter the num of element to fill in array ");
//   scanf("%d",&n);
//   int arr[n];
//   for(int i = 0 ;i<=n-1;i++){
//     scanf("%d",&arr[i]);
//   }

//    int x;
//   printf("Enter the num to find in array");
//   scanf("%d",&x);

//   bool flag = false;
//   for(int i =0;i<=n-1 ;i++){
//     if(arr[i]==x){   // alse can be this condition  (x==arr[i])
//        flag = true;
//     }
//   }
// if(flag==true)printf("X is present");
// else printf("X is not present");
// }


// num of element greater than the enter element X 
// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter the num of element to fill in array ");
//   scanf("%d",&n);
//   int arr[n];
//   for(int i = 0 ;i<=n-1;i++){
//     scanf("%d",&arr[i]);
//   }

//    int x;
//   printf("Enter the num to find in array");
//   scanf("%d",&x);
//   int count = 0;


//   for(int i =0;i<=n-1 ;i++){
//     if(arr[i]>x){   
//        count = count + 1;
//     }
//   }
// printf("Num of element greater than x is : %d",count);

// }


// Product of the elements of the array 

// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter the num of element to fill in array ");
//   scanf("%d",&n);
//   int arr[n];
//   for(int i = 0 ;i<=n-1;i++){
//     scanf("%d",&arr[i]);
//   }
//   int product = 1;
//   for(int i =0;i<=n-1 ;i++){  
//        product = product * arr[i];
//     }
//     printf( " product of Num of element present in array  : %d",product);
//   }


// FIND THE LASGEST ELEMENT IN THE ARRAY
// #include<stdio.h>
// int main(){
//     int n ;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }
//    int max = arr[0];
//    for(int i = 1;i<=n-1;i++){
//         if(max<arr[i]) max = arr[i];
//     }
//    printf("%d",max);
// }

// BEST METHOD TO FIND GREATEST ELEMENT // Using <limits.h> and <climits> in c++
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n ;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }
//    int max = INT_MIN;
//    for(int i = 0;i<=n-1;i++){
//         if(max<arr[i]) max = arr[i];
//     }
//    printf("Largest element of the array is : %d",max);
// }


// #include<stdio.h>

// void display(int a[], int length){
//     for(int i = 0; i<= length -1 ;i++ ){
//         printf("%d ",a[i]);
//     }
//     return ;
// }
// int main(){
//     int arr[5] = {4,6,78,90,4};
//     int length = sizeof(arr)/sizeof(arr[0]);
//     display(arr,length);
// }

// TO FIND THE SECOND MAX VALUE IN THE GIVEN ARRAY 
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&arr[i]);

//     }

//     int max = INT_MIN;

//     for(int i = 0;i<=n-1;i++){
//        if(max<arr[i])  max = arr[i];

//     }

//     printf(" The max value in the array is : %d \n",max);

//     int smax = INT_MIN;
//   for(int i = 0;i<=n-1;i++){
//        if(  arr[i] != max && smax<arr[i])  smax = arr[i];

//     }
//     printf(" The second max value in the array is : %d ",smax);
// }


// #include<stdio.h>
// #include<limits.h>



// void display(int a[]){
//     for(int i = 0;i<=4;i++){
//         printf("%d ",a[i]);
//     }
// }
// int main(){

// int arr [5] = { 1,2,3,4,5};
// int *p = arr;
// printf("%p ",arr);
// printf("%p ",&arr);


// }



// Printing or array in reverse order 
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i =0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i =n-1;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }

//      for(int i=0;i<=n-1;i++){
//         if(arr[i]<35) printf("%d ",i);
//     }
//     printf("\n");
// }


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }

//     int sum = 0;
//     for(int i = 0;i<=n-1;i++){
//         sum = sum + arr[i];
//     }

//     printf("%d",sum);
// }

// #include<stdio.h>
// #include<limits.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }

//     int max = INT_MIN;
//     for(int i = 0;i<=n-1;i++){
//         if(max<arr[i])  max = arr[i];
//     }

//     printf("%d",max);
// }


// #include<stdio.h>
// #include<limits.h>
// void display(int *p,int n){
   
//     for(int i = 0;i<=n-1;i++){
//        printf("%d ",p[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }
//     int*p = arr;
//     display(p,n);
// }

// REVERSE ORDER OF THE ARRAY 
// #include<stdio.h>
// int main(){
//     int arr[5] = {3,4,5,6,7};
//     int brr[5];
//     for(int i = 4;i>=0;i--){
//        brr[i] = arr[i]; 
//     }
// printf("\n");
   
// for(int i = 4;i>=0;i--){
//       printf("%d ",brr[i]);
//     }
// }




// 2-D arrays 
//Printing elements of 2-d arrays
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int m;
//     scanf("%d",&m);
//     int arr[n][m];
//  for(int i = 0;i<=n-1;i++){
//        for(int j = 0;j<=m-1;j++){
//          scanf("%d",&arr[i][j]);
//        }
//     }
 
//  for(int i = 0;i<=n-1;i++){
//        for(int j = 0;j<=m-1;j++){
//          printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//     }

// }



// Print max element along with its indices 
// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int n, m;
//     scanf("%d", &n);
//     scanf("%d", &m);
//     int arr[n][m];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     int max = INT_MIN;
//     int max_i ;
//     int max_j ;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (max < arr[i][j]) {
//                 max = arr[i][j];
//                 max_i = i;
//                 max_j = j;
//             }
//         }
//     }

//     printf("The max element is: %d\n", max);
//     printf("The indices of the max element are:  %d , %d ", max_i, max_j);

//     return 0;
// }



// Tranpose of the matrix 
// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int n, m;
//     scanf("%d", &n);
//     scanf("%d", &m);
//     int arr[n][m];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }





//   for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", arr[j][i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


//or


// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int n, m;
//     scanf("%d", &n);
//     scanf("%d", &m);
//     int arr[n][m];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//   for (int j = 0; j < m; j++) {
//         for (int i = 0; i < n; i++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// STRINGS ==> IT is a character array 
// #include<stdio.h>
// int main(){
//     char arr[]={'H','E','L','L','O','\0'};
//     for(int i =0; arr[i]!='\0';i++){
//         printf("%c ",arr[i]);
//     }

// }

// #include<stdio.h>
// int main(){
//    char arr[]="Hello";
//     for(int i =0; arr[i]!='\0';i++){
//         printf("%c ",arr[i]);
//     }

// }


//Use of puts and gets in C 
// #include<stdio.h>
// #include<string>
// int main(){
//    char str[40];
//    gets(str);
//    puts(str);
// }

// #include<stdio.h>
// int main(){
//     int arr[7] = {6,5,4,3,2,1,6};
//     for(int i = 0; i<=6; i++){
//         for(int j = i+1;j<=6;j++){
//              if(arr[i]==arr[j]){
//                   printf(" this num is repeated %d ",arr[i]);
                  
//              }
//         }
//     }

    
// }

