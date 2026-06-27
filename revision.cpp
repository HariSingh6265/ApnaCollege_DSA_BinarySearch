#include <iostream>
using namespace std;

int main(){
     int arr[5] = {10,23,45,900,24};
     int greatest = arr[0];

     for(int i = 1; i < 5; i++){
      if (arr[i] > greatest ){
           greatest = arr[i];
      }
     }
     cout << greatest;
      return 0;
     }







     //     int marks[];
     //     cin >> marks[];
     //     cout << marks[];
         

    // abhi CREATION ka kaam hai bs
    
     //int Marks[] = {1,2,3,4,5,6,7,8,9,10}; //default 10 space ki memory de chuka hai mere array ko

     //NOTE: 
     // int marks[50] = {1,2,3,4,5} to kay ye galat ho gaya?? nhi cuz space 50 ki hi hai maine bs uske starting ke elements daal diye hain that's it!!! 


     //Array Access krne ke liye indexing naam ki cheez hoti hai 

     // cout << marks[3] mtlb 4th no. pe jo element hai usko print ya jo bhi apan ko kaam hai.. vo show karega

    //   cout << marks[-1]; iss condition mein garbage value milegi apan ko.. to dekhke hi krna jo krna hai


    //LOOPS ON ARRAYS
    // size = o to n-1;
    //size of = sizeof(marks) mtlb "marks" array kitti size of bytes ko occupy krta hai
    // jab hum sizeof(marks) / sizeof(int) krte hain to no. of elements ka idea lg jata hai.. 
    // cout << sizeof(marks);


/*int size = 5;
    int marks[size];

    
    cout << "enter ur elements of array: ";
    for (int i = 0; i < 5; i++){
         cin >> marks[i];
     }

     for (int i = 0; i < 5; i++){
         cout << marks[i] << " ";
     }*/

