#include <iostream>
#include <string>
using namespace std;

class Time12
{
public:
    int hours;
    int minutes;
    string am_pm;

public:
    Time12(int h, int m, const string& apm)
    {
        hours = h;
        minutes = m;
        am_pm = apm;
    }

    void to24HourFormat()
    {
        if (am_pm == "PM" && hours != 12)
        {
            hours += 12;
        }
        else if (am_pm == "AM" && hours == 12)
        {
            hours = 0;
        }
    }

    void display12HourFormat()
    {
        cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " " << am_pm << endl;
    }
};

class Time24
{
public:
    int hours;
    int minutes;

public:
    Time24(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    void to12HourFormat()
    {
        string apm = (hours >= 12) ? "PM" : "AM";
        if (hours > 12)
        {
            hours -= 12;
        }
        else if (hours == 0)
        {
            hours = 12;
        }
        cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " " << apm << endl;
    }

    void display24HourFormat()
    {
        cout << (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "") << minutes << endl;
    }
};

int main()
{
    int h12, m12;
    string apm;
    cout << "Enter time in 12-hour format (hh:mm AM/PM): ";
    cin >> h12 >> m12 >> apm;

    Time12 time12(h12, m12, apm);

    time12.to24HourFormat();

    cout << "Time in 24-hour format: ";
    time12.display12HourFormat();

    int h24, m24;
    cout << "Enter time in 24-hour format (hh:mm): ";
    cin >> h24 >> m24;

    Time24 time24(h24, m24);

    cout << "Time in 12-hour format: ";
    time24.to12HourFormat();

    return 0;
}
