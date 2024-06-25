#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void getTime()
    {
        cout << "Enter time:" << endl;
        cout << "Hours: "; cin >> hours;
        cout << "Minutes: "; cin >> minutes;
        cout << "Seconds: "; cin >> seconds;
    }

    void displayTime()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    void addTime(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;
        minutes %= 60;
        seconds %= 60;
    }
};

int main()
{
    Time T1, T2, sum;

    cout << "Enter time for T1:" << endl;
    T1.getTime();

    cout << "\nEnter time for T2:" << endl;
    T2.getTime();

    sum.addTime(T1, T2);

    cout << "\nT1: ";
    T1.displayTime();

    cout << "T2: ";
    T2.displayTime();

    cout << "sum: ";
    sum.displayTime();

    return 0;
}
