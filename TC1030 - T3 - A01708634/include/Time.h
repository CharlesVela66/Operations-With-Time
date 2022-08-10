#include <iostream>

using namespace std;

class Time {
    private:
        int hours,minutes,seconds;
    
    public:
        Time();
        Time (int _hrs, int _min, int _sec);
        Time operator+(Time t2);
        Time operator-(Time t2);
        Time operator*(Time t2);
        Time operator/(Time t2);
        bool operator>(Time t2);
        bool operator<(Time t2);
        bool operator==(Time t2);
        int getHours();
        int getMinutes();
        int getSeconds();
        void setHours(int hrs);
        void setMinutes(int min);
        void setSeconds(int sec);
        void printTime();
        void printTime(int n);
};
