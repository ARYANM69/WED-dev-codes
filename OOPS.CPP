// #include<iostream>
// #include<string>
// using namespace std;
// class cars{
//     public:
//     string name;
//     int prize;
//     float  Maxspeed;

// };
// int main(){
//     int cr = 5;
//     cars car [5];

//     for(int i = 0;i<=4;i++){
//         cout<<"Enter the name "<<i+1<<" of the car ";
//         getline(cin,car[i].name);
//         cout<<"Enter the prize "<<i+1<<" of the car ";
//         cin>>car[i].prize;
//         cin.ignore();
//         cout<<"Enter the Maxspeed "<<i+1<<" of the car ";
//          cin>>car[i].Maxspeed;
//          cin.ignore();
//     }

// for(int i = 0;i<=4;i++){
//         cout<<"the name "<<i+1<<" of the car ";
//         cout<<car[i].name<<endl;
//         cout<<" the prize " <<i+1<<" of the car ";
//         cout<<car[i].prize<<endl;
        
//         cout<<" the Maxspeed "<<i+1<<" of the car ";
//          cout<<car[i].Maxspeed<<endl;
         
//     }
//     cout<<endl;



// }




// #include<iostream>
// #include<string>
// using namespace std;
// class student{
//     public:
//     string name;
//     int roll;
//     float  marks;
//     int display(string n,int r,float m){
//         name = n;
//         roll = r;
//         marks = m;
//         return 0;
//     }

// };

// int main(){
//     student s;
  
//     s.display("Aryan",45,98.0);

//    cout<< s.name<<" ";
//     cout<<s.roll<<" ";
//     cout<<s.marks<<" ";

// }

// if using cin>>n for n then use cin.ignore();
// #include<iostream>
// #include<string>
// using namespace std;
// class student{
//     public:
//     string name;
//     int roll;
//     float  marks;

// };

// int main(){
//     int n = 3;
   
//     student STUdent[n];
//     for(int i = 0;i<=n-1;i++){
//         cout<<"Enter the name of "<<i+1<<"student ";
//         getline(cin,STUdent[i].name);
//         cout<<"Enter the roll of "<<i+1<<"student ";
//         cin>>STUdent[i].roll;
//          cin.ignore();
//         cout<<"Enter the marks  of "<<i+1<<"student ";
//         cin>>STUdent[i].marks;
//          cin.ignore();

//     }

   
//  for(int i = 0;i<=n-1;i++){
//         cout<< "the name of "<<i+1<<"student "<<endl;
//        cout<< STUdent[i].name<<endl;
        
//         cout<<"the roll of "<<i+1<<"student "<<endl;
//         cout<<STUdent[i].roll<<endl;
        
//         cout<<"the marks  of "<<i+1<<"student "<<endl;
//         cout<<STUdent[i].marks<<endl;
        
//     }
//     cout<<endl;
    

 

// }




// #include<iostream>
// #include<string>
// using namespace std;
//   string name;
//    int roll;
//     float  marks;
//     int display(string n,int r,float m){
//         name = n;
//         roll = r;
//         marks = m;
//         return 0;
//     }
// int main(){
   
  

//     display("Aryan",45,98.0);
//    cout<<name<<" ";
    

// }

// #include<iostream>
// #include<string>
// using namespace std;
// class student{
//     public:
//     string name;
//     int roll;
//     float  marks;
//     int display(string n,int r,float m){
//         name = n;
//         roll = r;
//         marks = m;
//         return 0;
//     }

// };

// int main(){
//     student s;
  
//     s.display("Aryan",45,98.0);

//    cout<< s.name<<" ";
//     cout<<s.roll<<" ";
//     cout<<s.marks<<" ";

// }


// #include<iostream>
// #include<string>
// using namespace std;
// class bank{
//     public:
//    string holder;
//    int amount;
//    string type;
   
// };
// int main(){
//    int a = 3;
//    bank account[a];
//    for(int i =0;i<=2;i++){
//     cout<<"Enter the name of"<<i+1<<"holder";
//     getline(cin,account[i].holder);
//     cout<<"Enter the amount of"<<i+1<<" money in holder account";
//     cin>>account[i].amount;
//     cin.ignore();
//      cout<<"Enter the name of"<<i+1<<" account type ";
//     getline(cin,account[i].type);
//    }
  

//   for(int i =0;i<=2;i++){
//     cout<<" the name of"<<i+1<<" holder";
//     cout<<account[i].holder<<endl;
//     cout<<" the amount of"<<i+1<<" money in holder account ";
//    cout<<account[i].amount<<endl;
  
//      cout<<"the name of"<<i+1<<" account type ";
//     cout<<account[i].type<<endl;
//    }
//    cout<<endl;


// }



// getter and setter
// #include<iostream>
// #include<string>
// using namespace std;
// class Student{
//    string name;
//    int enrollment;
//    public:

//    void setname(string x){
//            name = x;
//    }


// void setenrollment(int y){
//            enrollment = y;
//    }



//    string getname(){
//     cout<< name;
//    }

// int getenrollment(){
//          return  enrollment;
//    }



// };
// int main(){
//  Student s;

//  string namex;
//  getline(cin,namex);
//   s.setname(namex);
//  cout<<s.getname();
//  cout<<endl;

//  cout<<"enter the roll no. ";
//  int n;
//  cin>>n;
//  s.setenrollment(n);
//  cout<<s.getenrollment();



// }


#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the number of element is the array ";
    // cin>>n;
    // int arr[n];
    // int max = INT_MIN;
    // for(int i =0;i<=n-1;i++){
    //     cin>>arr[i];
    // }
    // for(int i =0;i<=n-1;i++){
    //     if(max<arr[i]) max = arr[i];
    // }


    // cout<<"The largestElement in the array is "<<max;

    char ch = 'a';
    cout<<(int)ch;

   
}






