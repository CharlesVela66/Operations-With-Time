#include "Time.h"

#include <iostream>
using namespace std;


// Method Functionality
Time::Time(){
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time (int _hrs, int _min, int _sec){
    hours = _hrs;
    minutes = _min;
    seconds = _sec;
}

Time Time::operator +(Time t2){
	Time t3;
	t3.seconds = this->seconds + t2.seconds;
	while(t3.getSeconds() >= 60){
		t3.seconds = t3.seconds - 60;
		t3.minutes++;
	}
	t3.minutes = this->minutes + t2.minutes;
	while(t3.getMinutes() >= 60){
		t3.minutes = t3.minutes - 60;
		t3.hours++;
	}
	t3.hours = this->hours + t2.hours;
	while(t3.getHours() >= 24){
		t3.hours = t3.hours - 24;
	}
	return t3;
}

Time Time::operator -(Time t2){
	Time t3;
	t3.seconds = this->seconds - t2.seconds;
	while(t3.getSeconds() < 0){
		t3.seconds = 59 - t3.seconds;
		t3.minutes--;
	}
	t3.minutes = this->minutes - t2.minutes;
	while(t3.getMinutes() < 0){
		t3.minutes = 59 - t3.minutes;
		t3.hours--;
	}
	t3.hours = this->hours - t2.hours;
	while(t3.getHours() < 0){
		t3.hours = 23 - t3.hours ;
	}
	return t3;
}

Time Time::operator *(Time t2){
	Time t3;
	t3.seconds = this->seconds * t2.seconds;
	while(t3.getSeconds() >= 60){
		t3.seconds = t3.seconds - 60;
		t3.minutes++;
	}
	t3.minutes = this->minutes * t2.minutes;
	while(t3.getMinutes() >= 60){
		t3.minutes = t3.minutes - 60;
		t3.hours++;
	}
	t3.hours = this->hours * t2.hours;
	while(t3.getHours() >= 24){
		t3.hours = t3.hours - 24;;
	}
	return t3;
}

Time Time::operator /(Time t2){
	Time t3;
	t3.hours = this->hours / t2.hours;
	t3.minutes = this->minutes / t2.minutes;
	t3.seconds = this->seconds / t2.seconds;
	return t3;
}

bool Time::operator >(Time t2){
	if (this->hours > t2.hours){
		return true;
	}
	else {
		return false;
	}
}

bool Time::operator <(Time t2){
	if (this->hours < t2.hours){
		return true;
	}
	else {
		return false;
	}
}

bool Time::operator ==(Time t2){
	if (this->hours == t2.hours){
		if (this->minutes == t2.minutes){
			if (this->seconds == t2.seconds){
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

int Time::getHours(){
    return hours;
}

int Time::getMinutes(){
    return minutes;
}

int Time::getSeconds(){
    return seconds;
}

void Time::setHours(int hrs){
    if (hrs >= 0 && hrs <=24){
        hours = hrs;
    }
    else {
    	hours = 0;
    }
}

void Time::setMinutes(int min){
    if (min >= 0 && min<=60){
        minutes = min;
    }
    else {
    	minutes = 0;
    }

}

void Time::setSeconds(int sec){
    if (sec >= 0 && sec <= 60){
        seconds = sec;
    }
    else {
    	seconds = 0;
    }
}

void Time::printTime(){
    cout <<"The time is " << getHours() << ":" << getMinutes() << ":"<< getSeconds() << "\n";
}

void Time::printTime(int n){
	cout <<"The time is " << getHours() << ":";
	for (int i = 0; i < n; i++){
		cout <<"_";
	}
	cout<< getMinutes() << ":";
	for (int i = 0; i < n; i++){
		cout <<"_";
	}
	cout<< getSeconds() <<endl;
}
