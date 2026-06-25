#include <iostream>
using namespace std;

class teacher {
    public:
    teacher(){
        cout<<"Teacher class"<<endl;
    }
    // private:
    string dept;
    string name;
    int salary;
};

     int main(){

     teacher t1;
     t1.dept="CSE";
     t1.name="Rahul";
     t1.salary=10000;

     cout<<t1.dept << "\n"<< t1.name<< "\n"<< t1.salary<<endl;
     return 0;
}