// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i <= 10 ; i += 1){
//         cout<<"Hello World"<<"   ";
//     }
// }

//Print Number from 1 to 100
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i <= 100; i += 1){
//         cout<<i<<" ";
//     }
// }

//Print Even Number from 1 to 100
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 2; i <= 100; i += 2){
//         cout<<i<<" ";
//     }
// }

// or

//Print Even Number from 1 to 100
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i <= 100; i += 1){
//     if(i%2==0){
//          cout<<i<<" ";
//     }
       
//     }
// }

//Print Table of 19
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 19; i <= 190; i += 19){
    
//          cout<<i<<" ";
    
       
//     }
// }

//Print Table of NUM n
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = n; i <= n*10; i += n){
    
//          cout<<i<<" ";
    
       
//     }
// }

//Display An AP 1,3,5,7,9.. upto N terms

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i <= 2*n-1 ; i +=2){
//         cout<<i<<" ";
//     }
    
// }


//OR
// USING A VARIABLE a

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     a= 1;
//     for(int i = 1; i <= n ; i +=1){
//         cout<<a<<" ";
//         a = a + 2;
//     }
    
// }


//Display An AP 4,7,10,13.. upto N terms
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     for(int i = 4; i <= 3*n+1 ; i = i + 3){
//         cout<<i<<" ";
      
//     }
// }


//OR
// USING A VARIABLE a

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     a= 4;
//     for(int i = 1; i <= n ; i +=1){
//         cout<<a<<" ";
//         a = a + 3;
//     }
    
// }

//Display  GP 1,2,4,8,16,32  Upto N terms 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     a= 1;
//     for(int i = 1; i <= n ; i = i +1){
//         cout<<a<<" ";
//         a = a*2;
//     }
    
// }

// DISPLAY AP 100,97,94..... Upto to N terms which are possitive
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i =100; i>= 103 - 3*n; i = i - 3){
//         if(i>0){
//             cout<<i<<" ";
//         }
      
//     };
// }

//OR
// USING A VARIABLE a

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a;
//     a =100;
//     for(int i =1; i<=n; i = i + 1){
//       if(a>0){
//              cout<<a<<" ";
//         a = a-3;
//       }
       
//     };
// }


//while loop
// int i ; ==> Initialization before the loop
// cin>>i;
//while(Condition){
   // cout<<i<<endl; 
   // i++;  ==>updation inside the loop;
//}


// #include<iostream>
// using namespace std;
// int main(){
//    int i ;
//    cin>>i;
//   while(i<=10){
//       cout<<"Hello world "<<" ";
//       i++;
//    }
//    return 0;
// }


//Print All upper case alphabet with its ASCII value
// ==> Logic print 65 to 97 then make type caste these number into the character and use spcae to print the character the their respective value together 
// #include<iostream>
// using namespace std;
// int main(){
//    for(int i = 65; i<=90; i++){
//       (char)i;
//       cout<<(char)i<<" ";
//       (int)i;
//       cout<<(int)i<<endl;
//    }
// }

//Print All upper case alphabet with its ASCII value
// #include<iostream>
// using namespace std;
// int main(){
//    for(int i = 65; i<=90; i++){
//       cout<<(char)i<<" "<<i<<endl;
      
//          }
// }


//Write a program to a prime number or not

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//   bool flag = true;
//    for(int i = 2; i<=n-1; i = i +1){
//       if(n%i==0){
//         bool flag = false;
//          break;
//       }
//    }
//       if(n==1 || n==0){cout<<"The number is neither prime or composite";}
//      else if(bool flag = true){cout<<"The number is an prime number";}
//       else{cout<<"The number is a composite number ";}
     
   
// }

//OR


// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int a;
//    a = 0;
//    for(int i = 2; i<=n-1;i = i = 1){
//       if(n%i==0){
//       a = 1;
//       break;
//    }
//    }
//    if(n==1 || n==0){cout<<"The number is neither prime or composite";}
//    else if(a==0){cout<<"The number is an prime number";}
//        else{cout<<"The number is a composite number ";}

// }

// WAP TO PRINT ODD NUM FROM 1 TO 100
// #include<iostream>
// using namespace std;
// int main(){
//    for(int i = 1; i<=100 ; i = i +2){
//       cout<<i<<endl;
//    }
//    return 0;
// }

// WAP TO PRINT ODD NUM FROM 1 TO 100 by using continue statments 
// #include<iostream>
// using namespace std;
// int main(){
//    for(int i = 1; i <=100 ; i = i +1){
//       if(i%2==0) continue;
//       cout<<i<<endl;
//    }
// }

//MUST USE WHILE LOOP FOR CONDITION OR USING OPERATORS 
//NUMBER OF DIGITS IN THE GIVEN NUM
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int count;
//    count = 0;
//    int a;                                                           
//    a = n;                                                           
//    while(n>0){                                                    // or  for(;n>0;){      
//       n/=10;                                                     // n/=10;
//       count = count + 1;                                        // count = count + 1;
//    }
//    if(a==0)cout<<1;
//    else cout<<count<<endl;
// }                                                                      



// PRINT THE SUM OF DIGIT OF A GIVEN NUM
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int lastdigit = 0;
//   int sum = 0;
//   while(n>0){
//     lastdigit = n%10;
//     sum += lastdigit;
//     n/=10;
//   }
//   cout<<sum;
// }



// PRINT REVERSE  OF A GIVEN NUM // reverse acting as sum of a digit in some condition just multiple reverse with 10 before adding the last digit
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int lastdigit = 0;
//   int reverse = 0;
//   while(n>0){
//     reverse = reverse * 10;
//     lastdigit = n%10;
//     reverse = reverse + lastdigit ;
//     n/=10;
//   }
//   cout<<"Reverse of the num is "<<reverse;
// }

// FACTORIAL

#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int factorial = 1;
   if(n<0)cout<<" Factorial of a negative num does not exist";
   else if(n<=1) cout<<n<<"!= "<<factorial;
   else{
      for(int i = n;i>=2 ; i--){
         factorial = factorial*i;
      }
      cout<<factorial;
   }

   
}
