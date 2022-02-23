#include<iostream>
using namespace std;

class Book
{
    private:
    public:
    int bookId[50];
    int bookprice[50];
    int counter = 0;
    void setinfo(void);
    void displayinfo(void);
}b;

void Book::setinfo(void){
    cout<<"Enter the Id Of the book no "<<counter+1<<" ";
    cin>>bookId[counter];
    cout<<"Enter the price Of the book no "<<counter+1<<" ";
    cin>>bookprice[counter];
    counter++;
}

void Book::displayinfo(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Id of the "<<i+1<<" book is "<<bookId[i]<<" and the price is "<<bookprice[i]<<"!"<<endl;
    }
    
    
}

int main(void){
    b.setinfo();
    b.setinfo();
    b.setinfo();
    b.displayinfo();
    return 0;

}