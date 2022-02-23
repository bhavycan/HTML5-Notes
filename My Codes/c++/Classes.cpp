#include<iostream>
using namespace std;

class Employee
{
private:
     int a,b,c;     
    // All the variables and functions declared under a private access modifier can only be used inside the class.
    // They are not permissible to be used by any object or function outside the class.
public:
    int d,e;
    void setData(int a,int b,int c);            //declaration
    void getData(){
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The value of c is :"<<c<<endl;
        cout<<"The value of d is :"<<d<<endl;
        cout<<"The value of e is :"<<e<<endl;
    }
};

void Employee :: setData(int a1,int b1,int c1){     //defination
    //tells that this function is from class Employee
    a=a1;
    b=b1;
    c=c1;
}


int main(){
Employee emp;
emp.d = 4;
emp.e = 5;
// emp.a = 6; cannot exceptable 
//you cannot acces the private member directly
emp.setData(2,3,4);
emp.getData();

    return 0;
}