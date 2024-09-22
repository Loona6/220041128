#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
   
    Time() : hour(0), minute(0), second(0) {}

    
    int hours() const {
        return hour;
    }

    
    int minutes() const {
        return minute;
    }

   
    int seconds() const {
        return second;
    }

   
    void reset(int h, int m, int s) {
        
        if (h >= 0 && h < 24)
            hour = h;
        else
            hour = 0; 

        if (m >= 0 && m < 60)
            minute = m;
        else
            minute = 0; 

        if (s >= 0 && s < 60)
            second = s;
        else
            second = 0; 
    }

    
    void advance(int h, int m, int s) {
        
        second += s;
        minute += second / 60;
        second %= 60;

        minute += m;
        hour += minute / 60;
        minute %= 60;

        hour += h;
        hour %= 24; 
    }

    
    void print() const {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    }
};

int main() {
    
    
    Time t;

   
    t.reset(12, 30, 45);
    t.print();  

    
    t.advance(2, 45, 50);
    t.print();  

    
    t.advance(10, 50, 70);
    t.print();  

    return 0;
}
