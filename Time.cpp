#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void getTime()
    {
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    void addTime(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60)
        {
            seconds = seconds - 60;
            minutes++;
        }

        if (minutes >= 60)
        {
            minutes = minutes - 60;
            hours++;
        }
    }

    void display()
    {
        cout << "Total Time = "
             << hours << " : "
             << minutes << " : "
             << seconds;
    }
};

int main()
{
    Time t1, t2, t3;

    t1.getTime();
    t2.getTime();

    t3.addTime(t1, t2);

    t3.display();

    return 0;
}
