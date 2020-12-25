// here is complete code
// output is attached
// plz comment if you need any clarification
// hit like if you liked it

// CODE
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

int day_of_week(int year, int month, int day) {
    int y = year;
    int m = month - 1;
   
    if( month < 3) {
        y--;
        m = m+4;
    }
   
    return (y + y / 4 - y / 100 + y / 400 + 3 * m + 4 - (m - m / 8) / 2 + day) % 7;
}

bool isLeapYear(int year) {
    // an year is said to be leap year
    if(year % 400) // if it is multiple of 400
        return true;
    if(year % 100) // and not multiple of 100
        return false;
    if(year % 4) // and multiple of 4
        return true;
    return false;
}

int getNDays(int month, int year) {
    if( month == 2) { // if month is feb
        if(isLeapYear(year)) // and year is leap year
            return 29; // it will have 29 days
        else // if not leap year
            return 28; // it will have 28 days
    } else if(month == 4 || month== 6 || month == 9 || month == 11 ) {
        // if month is apr, jun, sep, nov
        return 30; // it will have 30 days
    } else // else for all other months
        return 31; // will have 31 days
}

int main() {
    int y, m;
    cout<<"Enter month year : ";
    cin>>m>>y;
   
    int nDays = getNDays(m, y);

    cout<<"Su Mo Tu We Th Fr Sa"<<endl;
    for(int d = 1; d <= nDays;d++) {
        int day = day_of_week(y, m, d);
       
        if(d == 1)
            for(int j = 0; j < day; j++)
                cout<<"   ";
        cout<<setw(2)<<d<<" ";
        if(day == 6) { // if day is saturday go to new line
            cout<<endl;
        }
    }
    return 0;
}
