#include <iostream>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    void getDate(int a, int b, int c) {

        month = a;
        day = b;
        year = c;

        char tempChar = '/';

        cout << "Enter a date (format 12/31/99: " << endl;
        cin >> a >> tempChar >> b >> tempChar >> c;
    }

};
int main()
{
    return 0;
}