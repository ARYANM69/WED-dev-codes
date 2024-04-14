// CONDITIONAL STATEMENTS C++

// CONTROL STATMENTS ==> cause your code to jump .
// conditional statment ==> subset of control statment which tells the code where to jump on the basics of the condition [if else , for, while, switch] { NOT GOTO OR CONTINUE}
// IF ELSE 
// SWITCH
// TERNARY OPERATORS  

// if(condition){
//     statment}



// ONLY USING IF STATMENT
// FIND THE POSITIVE NUMBER IS EVEN OR ODD 
#include<iostream>
using namespace std;
int main (){

int x;
cin>>x;

if(x%2==0){

    cout<<x<<" is an even number ";
}

if(x%2!=0){

    cout<<x<<" is a odd number ";

}


    return 0;
}


// IF ELSE
// FIND THE POSITIVE NUMBER IS EVEN OR ODD 
#include<iostream>
using namespace std;
int main (){

int x;
cout<<"Enter the number ";
cin>>x;

if(x%2==0){

    cout<<x<<" is an even number ";
}

else{

    cout<<x<<" is a odd number ";
}

  return 0;
}


#include<iostream>
using namespace std;
int main (){

int x;
cout<<"Enter the number ";
cin>>x;

if(x%5==0){

    cout<<x<<" is divisible by 5 ";
}

else{

    cout<<x<<" is not divisible by 5 ";
}

  return 0;
}


// Print absolute value of the integer ==> MEANS |X| OF AN INTEGER
// SHORT AND SIMPLE METHOD 

#include<iostream>
using namespace std;
int main (){

int x;
cout<<"Enter the number ";
cin>>x;

if(x<0){
    x *= -1;
}

cout<<"Absoulte value of the integer is "<<x;
  return 0;
} // INITIAL VALUE OF X WILL BE CHANGED


// OR
// INITIAL VALUE OF X WILL REMAIN SAME 
#include<iostream>
using namespace std;
int main (){

int x;
cout<<"Enter the number ";
cin>>x;

if(x>0){

    cout<<"Absoulte value of the integer is "<<x;
}

else{ // ==> (x<=0)

    cout<<"Absoulte value of the integer is "<<-x;
}

  return 0;
}

// SELLING AND COST PRICE


// USING 3 IF STATMENT BE ELSE WILL PRINT 

#include<iostream>
using namespace std;
int main(){
float cp,sp,profit,loss;
cout<<"Enter the cost price ";
cin>>cp;

cout<<"Enter the selling price ";
cin>>sp;

if(cp>sp){
    loss = cp - sp ;
    cout<<"Loss has be done of amount "<<loss;
}

if(sp>cp){
   profit = sp - cp ;
    cout<<"profit has be done of amount "<<profit;
}

if(sp==cp){
    cout<<"NO PROFIT OR LOSS HAS BE DONE ";
}
return 0;
}
// OR BY ELSE IF

#include <iostream>
using namespace std;
int main() {
int cp,sp,profit,loss;
cin>>cp>>sp;

 if(sp>cp){
    cout<<sp-cp<<" profit is made ";
  }
  else{
    if(cp>sp){
      cout<<cp-sp<<" Loss has been done ";
    }
    else{
     
  cout<<"No profit or loss";
}
    }
    
  }


// OR (ELSE IF) ==> Always end with an ELSE (no else will bes possible without its if condition)

#include <iostream>
using namespace std;
int main() {
int cp,sp,profit,loss;
cin>>cp>>sp;

 
 if(sp==cp){
  cout<<"No profit or loss";
 }
 
 else { if(sp>cp){
    cout<<sp-cp<<" profit is made ";}
  
  else{
   
      cout<<cp-sp<<" Loss has been done ";
    }
    
  }
  return 0;
}

// MULTIPLE CONDITION USING && AND || 

// TAKE POSITIVE INTEGER INPUT AND TELL IT IS A 3 DIGIT NUMBER OR NOT
#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the positive integer ";
cin>>x;

if(x>99 && x<1000){

cout<<"It is a 3 digit number";
}

else{
    cout<<"It is not a 3 digit number ";
}
return 0;
}

// TAKE POSITIVE NUM INPUT AND TELL IT IS DIVISSSIBLE BY 3 AND 5

#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the positive integer ";
cin>>x;

if(x%5==0 && x%3==0){
    cout<<"The num is divisible by 5 and 3";
}
else{

    cout<<"The num is not divissible by 5 and 3";
}
return 0;
}

// TAKE POSITIVE NUM INPUT AND TELL IT IS DIVISSSIBLE BY 3 OR 5

#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the positive integer ";
cin>>x;

if(x%5==0 || x%3==0){
    cout<<"The num is divisible by 5 or 3";
}
else{

    cout<<"The num is not divissible by 5 or 3";
}
return 0;
}

// TAKE 3 POSITIVE INT INPUT AND PRINT THE GREATEST OF THEM 

#include <iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"Enter first num ";
cin>>x;

cout<<"Enter second num ";
cin>>y;


cout<<"Enter third num ";
cin>>z;



if(x>y && x>z){
    cout<<x<<" is the greatest num";
}
if(y>x && y>z){
    cout<<y<<" is the greatest num";
}
if(z>x && z>y){
    cout<<z<<" is the greatest num";
}
return 0;


}


// Write A PROGRAM To CHECK WHEATHER A CHARACTER IS AN ALPHABET OR NOT 

#include <iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"Enter a character ";
    cin>>ch;
if (((int)ch>64 && (int) ch<91) || ((int)ch>96 && (int) ch<123)){
   cout<<"The character is an alphabet ";
}

else{
   cout<<"The character is not an alphabet ";
}


return 0;
}


#include <iostream>
using namespace std;
int main(){
    int x ;
    cin>>x;
    if(x%5==0){
        if(x%3==0){
            cout<<"The num is divissible by both 5 and 3 ";

        }
        else{
    cout<<"The num is not divissible by 5 and 3 ";
 }
    }
 else{
    cout<<"The num is not divissible by 5 and 3 ";
 }
 return 0;
}



// INPUT 3 NUM AND FIND GREATEST AMOUNG THEM WITHOUT && AND ||

#include <iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter the first num ";
    cin>>x;
    
    int y;
     cout<<"Enter the second num ";
    cin>>y;

    int z ;
     cout<<"Enter the third num ";
    cin>>z;


    if(x>y){
        if(x>z){
            cout<<x<<" Is the greatest num ";
        }
        else{
            cout<<z<<" Is the greastest num ";
        }
    }
  
    else{
        if(y>z){
            cout<<y<<" Is the greatest num ";
        }
        else{
            cout<<z<<" Is the greastest num ";
        }
    }
return 0;


}



// ELSE IF 





//Three sides of triangle possible or not

#include <iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Enter the first side  ";
    cin>>a;
    
    int b;
     cout<<"Enter the second side ";
    cin>>b;

    int c ;
     cout<<"Enter the third side ";
    cin>>c;
    if(a+b>c){

        if(b+c>a){

            if(a+c>b){

               cout<<"these are the side of the triangle ";
            }
        }
    }
    else{


        cout<<"these are not the sides of the triangle ";
    }


    return 0;

}

// OR

#include <iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Enter the first side  ";
    cin>>a;
    
    int b;
     cout<<"Enter the second side ";
    cin>>b;

    int c ;
     cout<<"Enter the third side ";
    cin>>c;
    if(a+b>c && b+c>a && a+c>b){

       cout<<"these are the sides of the triangle ";
}
    else{


        cout<<"these are not the sides of the triangle ";
    }


    return 0;

}


// Write A PROGRAM To CHECK WHEATHER A CHARACTER IS AN ALPHABET is vowel  or consonant

#include <iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"Enter a character ";
    cin>>ch;
if (((int)ch>64 && (int) ch<91) || ((int)ch>96 && (int) ch<123)){
  if((int)ch == 97 || (int)ch ==101 ||(int) ch == 105 || (int)ch ==111 || (int)ch == 117){
    cout<<"The character is vowel ";
  }
  else{
    cout<<"The character is a consonant ";
  }
}

else{
   cout<<"The character is not an alphabet ";
}
return 0;
}

//or 


// Write A PROGRAM To CHECK WHEATHER A CHARACTER IS AN ALPHABET is vowel  or consonant

#include <iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"Enter a character ";
    cin>>ch;
if (((int)ch>64 && (int) ch<91) || ((int)ch>96 && (int) ch<123)){
  if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
    cout<<"The character is vowel ";
  }
  else{
    cout<<"The character is a consonant ";
  }
}

else{
   cout<<"The character is not an alphabet ";
}
return 0;
}


//PREDICT THE AREA OF THE CIRCLR IS GREATER THAN THE CIRCUMFERENCE OF THE CIRCLE
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  float pi,r,area,circumference;
  cin>>r;
  pi=3.1415;
  area = pi*r*r;
  circumference = 2*pi*r;
  
  if(area>circumference){
      cout<<" area is larger than circumference of the circle ";
  }
else{
    cout<<" circumference is greater than or equal to the area of the circle ";
}
    return 0;
}

//** Important leap year 
// USING ELSE IF 



#include <iostream>
using namespace std;
int main() {
int year;
cin>>year;

if(year%400==0){
    cout<<year<<" is a leap year ";

}
else if(year%100==0){
    cout<<year<<" Not a leap year ";
}   
else if(year%4){
    cout<<year<<" is a leap year ";
}
else{
    cout<<year<<" is not a leap year ";
}
return 0;
}


// WHAT TRIANGLE IS IT ON THE BASIS OF SIDE 
// USING ELSE IF
#include <iostream>
using namespace std;
int main() {
int a,b,c;
cin>>a>>b>>c;
if (a == b && b == c){
    cout<<" equilateral triangle ";
}

else if (a==b && a!=c || b==c && b!=a || a==c && a!=b){
    cout<<"isoscele trianle";
}

else{
    cout<<" Scalen triangle ";
}
return 0;
}


// POINT LIES ON X,Y OR AT ORIGIN
#include <iostream>
using namespace std;
int main() {
int x,y;
cin>>x>>y;


if (x==0 && y ==0){ 
    cout<<"point lies on origin";}
else{ if(x==0){
    cout<<"Point lies on y axis ";
 }
else{
    if(y==0){
        cout<<" Point lies on x axis" ;}


else {cout<<"point lies somewhere else ";}
}}

return 0;
}