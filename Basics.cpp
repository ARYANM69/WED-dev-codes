#include<iostream>
using namespace std;
int main(){

cout<<"Hello World";

return 0;
}

// use of  Multiple codes in a single line in Cout C++ syntax 

#include<iostream>
using namespace std;
int main(){
 cout<<"Hello World\n"<<"Hello Cw";


}
#include <iostream>
using namespace std;
int main(){
int x = 10;
x %=5;
cout<<x;
return 0;
}

#include<iostream>
using namespace std;
int main (){
cout<<5+7.13;
}

//  TAKING INPUT 

#include <iostream>
using namespace std ;
int main (){

   int a,b;

    cout<<"Enter the integer A";
    cin>>a;

    cout<<"Enter the integer B";
    cin>>b;

    if(a>b){

        cout<<a%b;
    }

    return 0 ;

}



//  PERCENT OF 5 SUBJECT 
#include <iostream>
using namespace std;
int main (){
    float phy,chem,maths,pe,eng,percent;
cout<<"Enter the marks of 1st subject ";
cin>>phy;

cout<<"Enter the marks of 2nd subject ";
cin>>chem;

cout<<"Enter the marks of 3rd subject ";
cin>>maths;

cout<<"Enter the marks of 4th subject ";
cin>>pe;


cout<<"Enter the marks of 5th subject ";
cin>>eng;

percent = (phy+chem+maths+pe+eng)/500*100;
cout<<"The percent of the followint subject out of 500 is : "<<percent;


}

#include<iostream>
using namespace std;
int main(){

   float r = 10;
   float circumference = 2*3.14*10;
   cout<<circumference;
   return 0;
}




// BOOLEAN DATA TYPE

#include<iostream>
using namespace std;
int main(){
bool flag = 12;
cout<<flag;
return 0;
}    // OUTPUT WILL BE 1 

#include<iostream>
using namespace std;
int main(){
bool x= true; bool y = false;
cout<<x<<endl<<y;
return 0;
}   // OUTPUT WILL BE 
    // 1
    // 0


#include<iostream>
using namespace std;
int main(){
    bool x = true; bool y= false;
 bool flag = x;   bool lol = y;

cout<<flag<<endl<<lol;
return 0;

}  // OUTPUT IS 
  // 1
 // 0

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;

    if (a>b){

        cout<<a%b;

    }

    return 0;
}

#include<iostream>
using namespace std;
int main(){
bool flag = true; bool lol = false;

cout<<flag<<endl<<lol;
return 0;
}

#include<iostream>
using namespace std;
int main(){
bool x= true; bool y = false;
cout<<x<<endl<<y;
return 0;
}

#include<iostream>
using namespace std;
int main(){
    bool x = true; bool y= false;
 bool flag = x;   bool lol = y;

cout<<flag<<endl<<lol;
return 0;

}