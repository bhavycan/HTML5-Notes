#include<iostream>
using namespace std;
int main(void)
{


//using the for loop and the nested or loop;
int arr[5];
int a[2];
for (int i = 0; i < 5; i++)
{
    cout<<"Enter the number: "<<endl;
    cout<< i+1<<"> ";cin>>arr[i];
    cout<<endl;
}
int key;
cout<<"Enter the target you want: "<<endl;
cout<< "> ";cin>>key;

for (int i = 0; i < 5; i++)
{



    for (int j = 0; j <i+1; j++)
    {
            if (arr[i] + arr[j] == key)         //checking for the target
            {
                a[0] = arr[i];
                a[1] = arr[j];
            }
            
    }
    
}


for (int i = 0; i <2; i++)
{

    cout<< i+1<< "> "<< a[i]<<endl;

}




//boolean function in switch case

    const int age = 4 ;
    switch(1)
    {
    case(age>45):
    {
        cout<<"You are old"<<endl;
        break;
    }
    case(age<15):
    {
        cout<<"Go and play kid"<<endl;
        break;
    }
    default:
    {
        cout<<"You are young man and still learning switch!"<<endl;
        break;
    }
    }
    return 0;
    
    } 