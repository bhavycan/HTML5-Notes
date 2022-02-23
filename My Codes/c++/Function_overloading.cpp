#include<iostream>
using namespace std;

int sum(float a,int b,int c){
    //even we use the float instead of int, the c++ compiler use it as it best!
    cout<<"Using the function with 3 arguments"<<endl;
    return a+b+c;
}

int sum(int a,int b){
    cout<<"Using the function with 2 arguments"<<endl;
    return a+ b;
}

//finding the volume of the shapes:

int volume(int radius,int h){
    return 3.14 * radius *radius*h;
}

int volume(int l,int b,int h){
    return l * b* h;
}

int volume(int a){
    return a*a*a;
}


int main()
{

    //function Overloading
cout<<"The sum of 3 and 6 is: "<<sum(3,6)<<endl;
cout<<"The sum of 3 and 6 and 7 is: "<<sum(3,6,7)<<endl;
cout<<"The volume of the cylinder with the radius 2 and hight 4 is: "<<volume(2,4)<<endl;
cout<<"The volume of the cube with hight 3 is: "<<volume(3)<<endl;
cout<<"The volume of the length, hight, width: "<<volume(4,5,2)<<endl;
return 0;
}


