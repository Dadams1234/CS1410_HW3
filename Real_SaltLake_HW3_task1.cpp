#include <iostream>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:

    // Ask for user to enter in a date
    void setDate(int a, int b, int c)
    {

        month = a;
        day = b;
        year = c;
    }
    void getDate()
    {
        int a,b,c;
        char tempChar ;

        cin >> a >> tempChar >> b >> tempChar >> c;
        setDate(a,b,c);
    }

    //Display users input
    void showDate()
    {

        cout << month << "/" << day << "/" << year<<endl;


    }
};
int main(void)
{
    Date d1, d2;
    cout << " Enter a date (format 12/31/99: " << endl;
    d1.getDate();
    cout << "Enter another date: ";
    d2.getDate();

    cout << "date 1 = ";
    d1.showDate();
    cout << "date 2 = ";
    d2.showDate();




    return 0;
}