#include <iostream>
using namespace std;

class Book
{
private:
    static int counter;
    //instead of using static integer if you use normal
    //int counter = 0;
    //than it will allocate for the each object and allways shows the output
    //"Enter the Id of the book" : 1
    //in addition , you must initialize with 0 before you use it



    //in static you dont need to define it with 0. by default the value is 0
    // Count is the static data member of class Employee
    // it value will be updated constantly for all object lifetime
public:
    int bookid;
    void setdata(void)
    {
        cout << "Enter the Id of the book " << counter + 1 << " ";
        cin >> bookid;
        counter++;
    }
    void displaydata(void)
    {
        cout << "The id of the book is: " << bookid << endl;
    }
};

int Book::counter;//giving the reference that counter is the static data memeber of the whole class


int main(void)
{
    Book b1, b2, b3;
    b1.setdata();
    b1.displaydata();

    b2.setdata();
    b2.displaydata();

    b3.setdata();
    b3.displaydata();
    return 0;
}