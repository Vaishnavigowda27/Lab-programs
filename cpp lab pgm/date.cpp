#include<bits/stdc++.h>

using namespace std;

class DATE {
private:
    int day, month, year;
public:
    DATE(int d = 0, int m = 0, int y = 0) : day(d), month(m), year(y) {

    }friend ostream& operator<<(ostream& out, const DATE& date);
    friend int operator-(const DATE& d1, const DATE& d2);
    friend DATE operator+(const DATE& d, int no_of_days);
};

ostream& operator<<(ostream& out, const DATE& date) 
{
    out << setw(2) << setfill('0') << date.day << "/"
        << setw(2) << setfill('0') << date.month << "/"
        << date.year;
    return out;
}

int operator-(const DATE& d1, const DATE& d2) 
{
    int days1 = d1.year * 360 + d1.month * 30 + d1.day;
    int days2 = d2.year * 360 + d2.month * 30 + d2.day;
    return days1 - days2;
}

DATE operator+(const DATE& d, int no_of_days) {
    DATE new_date = d;
    new_date.day += no_of_days;
    while (new_date.day > 30) {
        new_date.day -= 30;
        new_date.month++;
        if (new_date.month > 12) {
            new_date.month = 1;
            new_date.year++;
        }
    }
    return new_date;
}

int main() {
    DATE d1(13, 2, 2024), d2(1, 1, 2024);
    int no_of_days = d1 - d2;
    cout << "Number of days between " << d1 << " and " << d2 << ": " << no_of_days << endl;
    DATE d3 = d2 + no_of_days;
    cout << "New date after adding " << no_of_days << " days to " << d2 << ": " << d3 << endl;

    return 0;
}