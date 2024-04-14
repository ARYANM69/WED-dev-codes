NUMBER OF DIGITS IN THE GIVEN NUM
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    int a = n;
    while(n>0){
        n/=10;
        count = count + 1;
    }
    if(a==0)cout<<1;
    else cout<<count;
    return 0;
}



PRINT THE SUM OF DIGIT OF A GIVEN NUM
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lastdigit =0;
    int sum = 0;
    while(n>0){
        lastdigit = n%10;
        sum += lastdigit;
        n/=10;
    }
    cout<<"sum of the num is "<<sum;
}








PRINT REVERSE  OF A GIVEN NUM
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int lastdigit = 0;
   int reverse = 0;
   while(n>0){
    lastdigit = n%10;
    reverse *=10;
    reverse += lastdigit;
    n/=10;
   }
   cout<<reverse;
}


  