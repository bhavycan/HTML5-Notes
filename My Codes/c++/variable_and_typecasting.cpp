#include<iostream>
using namespace std;

//global variable
int c = 47;

int main(void)
{
    int a,b,c;
    cout<<"Enter the number for a: "<<endl;
    cin>>a;
    cout<<"Enter the number for b: "<<endl;
    cin>>b;

    //will print the sum of a+b, not gonna access the global variable
    c =a+b;
    cout<<"The sum is : "<< c<<endl;


    //if you wanna excess the global variable use the global scop-------> ::
    cout<<"The global variable is: "<<::c<<endl;



    //In the c++ programming the default type given to the variable is double
    float d =34.5;
    long double e =34.5;
    cout<<"The valuse of the d is: "<<d<<endl<<"The value of e is: "<<e;
    

    //so if you want to use the float then you should write as the 34.5F
    cout<<"The size of the 34.5 is: "<<sizeof(34.5)<<endl;
    cout<<"The size of the 34.5 is: "<<sizeof(34.5f)<<endl;
    cout<<"The size of the 34.5 is: "<<sizeof(34.5F)<<endl;
    cout<<"The size of the 34.5 is: "<<sizeof(34.5l)<<endl;
    cout<<"The size of the 34.5 is: "<<sizeof(34.5L)<<endl;


// ramesh----->ramu------>ram---->rockey
//same name of ramesh in the different place

float x =455;
//same name given to the y 
float & y = x;
cout<<x<<endl;
cout<<y<<endl;


//typecasting
cout<<"The integer value for d is: "<< (int)d<<endl;
cout<<"The integer value for d is: "<< int(d)<<endl;

    return 0;
}