#include <iostream>
#include <vector>
using namespace std;

     int main(){
     vector<int> a = {0,3,8,9,5,2};
     
     for (int i = 0; i < a.size()-1; i++)
     {
        if (a[i] > a[i-1] && a[i] > a[i+1])
        {
            cout<< i;
        }
        
     }
     return 0;
}