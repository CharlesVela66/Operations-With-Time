#include <iostream>

#include "Time.h"
using namespace std;

int main(){
	Time t1(11,4,1);
	Time t2(10,2,5);

	Time t3;
	t3 = t1 + t2;
	//cout << t3.getHours() << t3.getMinutes() << t3.getSeconds();
	t3 = t1 - t2;
	//cout << t3.getHours() << t3.getMinutes() << t3.getSeconds();
	t3 = t1 * t2;
	//cout << t3.getHours() << t3.getMinutes() << t3.getSeconds();
	t3 = t1 / t2;
	//cout << t3.getHours() << t3.getMinutes() << t3.getSeconds();
	t3 = t1 + t2;

	t3.printTime();
	t3.printTime(2);

	bool par;
	par = t1 > t2;
	cout << par << endl;
	par = t1 < t2;
	cout << par << endl;
	par = t1 == t2;
	cout << par << endl;

	Time t4(5,5,5);
	Time t5(5,5,5);

	par = t4 == t5;
	cout << par << endl;
}
