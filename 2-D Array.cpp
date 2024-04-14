// #include<iostream>
// using namespace std;
// int main(){
//     int arr [3] [3];
//     cout<<sizeof(arr);
    
// }


//Traversal through array // printing of elements of the array with gaps
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i = 0;i<=2;i++){
//         for(int j = 0;j<=2;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i = 0;i<=n-1;i++){ // FOR THE ROWS
//         for(int j = 0;j<=m-1;j++){// FOR THE COLUMNS
//             cin>>arr[i][j];
//         }
        
//     }

//      for(int i = 0;i<=n-1;i++){
//         for(int j = 0;j<=m-1;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// }


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i = 0;i<=n-1;i++){// No gaps in cin function
//         for(int j = 0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
        
//     }

//     int max = INT_MIN;

//      for(int i = 0;i<=n-1;i++){
//         for(int j = 0;j<=m-1;j++){
//            if(max<arr[i][j])  max = arr[i][j];
//         }
        
//     }
//   cout<<"The max element in the given array is : "<<max;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr [3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i = 0;i<=2;i++){
//         for(int j = 0;j<=2;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


 
// CODE FOR SUM OF 2 MATRIX 
// THE ORDER MUST BE SAME FOR THE ADDITION 

// #include<iostream>
// using namespace std;
// int main(){


//      int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i = 0;i<=n-1;i++){
//         for(int j = 0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
       
//     }
    
//     int brr[n][m];
//     for(int i = 0;i<=n-1;i++){
//         for(int j = 0;j<=m-1;j++){
//             cin>>brr[i][j];
//         }
       
//     }
  
//     int sum[n][m];
//     for(int i = 0;i<=n-1;i++){
//         for(int j = 0;j<=m-1;j++){
//          sum[i][j] = arr[i][j]+brr[i][j];
//         }
       
//     }
     

   
//     for(int i = 0;i<=n-1;i++){
//         for(int j = 0;j<=m-1;j++){
//          cout<<sum[i][j]<<" ";
//         }
//        cout<<endl;
//     }

// }




// SUM OF TWO ARRAYS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int brr[n];
//     for(int i = 0;i<=n-1;i++){
//         cin>>brr[i];
//     }

//     int c[n];
//     for(int i = 0;i<=n-1;i++){
//         c[i] = arr[i] + brr[i];
//     }

    
//     for(int i = 0;i<=n-1;i++){
//         cout<<c[i]<<" ";
//     }
// }


// sum of each element of a 2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }
//   int sum =0;
//      for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             sum = sum + arr[i][j];
//         }
//     }
//  cout<<sum;

// }


//To print a transpose of a matrix;
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;// n ==> num of rows m ==> num of columns
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }





// for(int j=0;j<=m-1;j++){
//         for(int i=0;i<=n-1;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;// n ==> num of rows m ==> num of columns
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++){
//             cin>>arr[i][j];
//         }
//     }





// {for(int i=0;i<=m-1;i++){
//         for(int j=0;j<=n-1;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }

// }
// }

// Largest element along with its indices 
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int arr[n][m];
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++)
//         cin>>arr[i][j];
//     }
//     int max =INT_MIN;
//     int max_i;
//     int max_j;
//     for(int i=0;i<=n-1;i++){
//           for(int j=0;j<=m-1;j++){
//        if(max<arr[i][j]){ max = arr[i][j];
//        max_i = i;
//        max_j = j;
//        }
//           }

//     }


//     cout<<" th max element is "<<max<<" and its indicies is :"<<max_i<<" , "<<max_j;
// }

//Multiplication of matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int a [3][2] = {1,2,3,4,5,6};
//     int b[2][4] = {1,2,3,4,5,6,7,8};
//     int res [3][4] = {0};
//     int rc = 2;
//     for(int i =0;i<=2;i++){
//         for(int j =0;j<=3;j++){
//             for(int k = 0;k<=1;k++){
//                 res[i][j] += a[i][k] * b[k][j];               
//             }
//         }

//     }


//     for(int i =0;i<=2;i++){
//         for(int j =0;j<=3;j++){
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str [50];
//     puts("Enter the sting");
//     gets(str);
//     puts(str);

// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     cout<<str;

// }
// #include<iostream>
// #include<cstring>
// using namespace std;

// class books{
//     public:
//     string name;
//     int prize;
//     string author;
//     string publication;
// };
// int main(){
// books first;
//  getline(cin,first.name);
//  first.prize= 40;
//  getline(cin,first.author);
//  getline(cin,first.publication);


// books second;
//  getline(cin,second.name);
//  second.prize= 840;
//  getline(cin,second.author);
//  getline(cin,second.publication);


//  books third;
//  getline(cin, third.name);
//   third.prize= 740;
//  getline(cin, third.author);
//  getline(cin, third.publication);


//  books forth;
//  getline(cin,forth.name);
//  forth.prize= 640;
//  getline(cin,forth.author);
//  getline(cin,forth.publication);

//  books five;
//  getline(cin, five.name);
//   five.prize= 340;
//  getline(cin,five.author);
//  getline(cin, five.publication);



//  books sixth;
//  getline(cin,sixth.name);
// sixth.prize= 240;
//  getline(cin,sixth.author);
//  getline(cin,sixth.publication);




//  books seventh;
//  getline(cin,seventh.name);
// seventh.prize= 560;
//  getline(cin,seventh.author);
//  getline(cin,seventh.publication);





//  books eight;
//  getline(cin,eight.name);
//  eight.prize= 30;
//  getline(cin,eight.author);
//  getline(cin,eight.publication);




//  books ninth;
//  getline(cin,ninth.name);
//  ninth.prize= 20;
//  getline(cin,ninth.author);
//  getline(cin,ninth.publication);





//  books ten;
//  getline(cin,ten.name);
//  ten.prize= 400;
//  getline(cin,ten.author);
//  getline(cin,ten.publication);



// cout<<first.name<<" "<<second.name<<" "<<third.name<<" "<<forth.name<<" "<<five.name<<" "<<" "<<sixth.name<<" "<<seventh.name<<" "<<eight.name<<" "<<ninth.name<<" "<<ten.name<<endl;
// cout<<first.prize<<" "<<second.prize<<" "<<third.prize<<" "<<forth.prize<<" "<<five.prize<<" "<<" "<<sixth.prize<<" "<<seventh.prize<<" "<<eight.prize<<" "<<ninth.prize<<" "<<ten.prize<<endl;
// cout<<first.author<<" "<<second.author<<" "<<third.author<<" "<<forth.author<<" "<<five.author<<" "<<" "<<sixth.author<<" "<<seventh.author<<" "<<eight.author<<" "<<ninth.author<<" "<<ten.author<<endl;
// cout<<first.publication<<" "<<second.publication<<" "<<third.publication<<" "<<forth.publication<<" "<<five.publication<<" "<<" "<<sixth.publication<<" "<<seventh.publication<<" "<<eight.publication<<" "<<ninth.publication<<" "<<ten.publication<<endl;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// class Book {
// public:
//     string name;
//     int prize;
//     string author;
//     string publication;
// };

// int main() {
//     const int numBooks = 10;
//     Book books[numBooks];

//     for (int i = 0; i < numBooks; i++) {
//         cout << "Enter book #" << i + 1 << " information:" << endl;
//         cout << "Name: ";
//         getline(cin, books[i].name);
//         cout << "Prize: ";
//         cin >> books[i].prize;
//         cin.ignore(); // Clear the input buffer
//         cout << "Author: ";
//         getline(cin, books[i].author);
//         cout << "Publication: ";
//         getline(cin, books[i].publication);
//     }

//     // Display the information for all books
//     cout << "\nBook Information:" << endl;
//     for (int i = 0; i < numBooks; i++) {
//         cout << "Book #" << i + 1 << endl;
//         cout << "Name: " << books[i].name << endl;
//         cout << "Prize: " << books[i].prize << endl;
//         cout << "Author: " << books[i].author << endl;
//         cout << "Publication: " << books[i].publication << endl;
//     }

//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// class book{
//     string name;
//     int prize;
//     string publication;
// }
// int main(){
//    int booknum[10];
//    book Books[booknum];
//    for(int i=0;i<10;i++){
//      cout<<"Enter the "<<i+1<<" Book name"<<endl;
//      getline(cin,Books.name);
//      cout<<"Enter the publication of the book "<<endl;
//      getlin(cin,Books.publication)
//      cout<<" Enter the prize of the book : "<<endl;
//      cin>>Books.prize<<endl;
//      cin.ignore();

//    }

//       for(int i=0;i<10;i++){
//      cout<<"the "<<i+1<<" Book name is ";
//      cout<<Books.name<<endl;
//      cout<<"the publication of the book ";
//      cout<<Books.publication<<endl;
//      cout<<"the prize of the book : ";
//      cout<<Books.prize<<endl;
     

//    }


// }

// #include<iostream>
// #include<string>
// using namespace std;
// class book{
//     public:
//     string name;
//     int prize;
// };
// int main(){
//     book books[2];
//     for(int i=0;i<2;i++){
//         getline(cin,books[i].name);
//         cin>>books[i].prize;
//         cin.ignore();
//   }

     
//     for(int i=0;i<2;i++){
//         cout<<books[i].name<<endl;
//         cout<<books[i].prize<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,2,3,4,5,5,6};
//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<7;j++){
//             if(arr[i]==arr[j]) cout<<"the dubalicate element is :"<<arr[i];

//         }
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
//     for(int i = n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//  bool flag = false;
//  for(int i = n-1;i>=2;i--){
//     if(n%i==0) flag = true;
//  }

//  if(n==0||n==1)cout<<"Neither prime or composite ";
//  else if(flag == false) cout<<n<<" is a prime number ";
//  else cout<<n<<" is a composite number ";



// }


// #include<iostream>
// using namespace std;
// int main(){
   
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int arr[n][m];
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=m-1;j++)
//         cin>>arr[i][j];
//     }

//     int p;
//     cin>>p;
//     int q;
//     cin>>q;
//     int brr[p][q];
//     for(int i=0;i<=p-1;i++){
//         for(int j=0;j<=q-1;j++)
//         cin>>brr[i][j];
//     }

// int crr [n][q] = {0};

//  for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=q-1;j++)
//         for(int k = 0;k<=m-1;k++){
//           crr [i][j] += arr[i][k] * brr[k][j];
//         }
        
//     }

//  for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=q-1;j++){
//        cout<<crr[i][j]<<" ";}
//         cout<<endl;
        
//     }





// }



// #include<iostream>
// #include<string>
// using namespace std;
// class books{
//     public:
//     string name;
//     int prize;
//     string publications;
// };
// int main(){
//     int Book = 3;
//     books book[Book];
//     for(int i = 0;i<=2;i++){
//         cout<<"Enter the name of the "<<i+1<<"book";
//         getline(cin,book[i].name);
//          cout<<"Enter the prize of the "<<i+1<<"book";
//         cin>>book[i].prize;
//         cin.ignore();
//          cout<<"Enter the name of the "<<i+1<<"publication";
//         getline(cin,book[i].publications);
//     }


// for(int i = 0;i<=2;i++){
//         cout<<" the name of the "<<i+1<<"book";
//         cout<<book[i].name<<endl;
//          cout<<"the prize of the "<<i+1<<"book";
//         cout<<book[i].prize<<endl;
       
//          cout<<" the name of the "<<i+1<<"publication";
//         cout<<book[i].publications;
//     }
//     cout<<endl;
// }