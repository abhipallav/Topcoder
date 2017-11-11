#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class FlightDataRecorder {
public:
	double getDistance(vector <int>, vector <int>);
};

double FlightDataRecorder::getDistance(vector <int> heading, vector <int> distance) {
	long double x = 0.0;
	long double y = 0.0;
	
	for(int i=0;i<heading.size();i++){
		x+= (long double)distance[i]*sin((long double)(heading[i]*M_PI/180));
		y+= (long double)distance[i]*cos((long double)(heading[i]*M_PI/180));
	}
	
	return (double)sqrt(x*x+y*y);
}

double test0() {
	int t0[] = {90,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	FlightDataRecorder * obj = new FlightDataRecorder();
	clock_t start = clock();
	double my_answer = obj->getDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 5.0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;	//I want to eventually turn this into a time of some kind.
	}
}
double test1() {
	int t0[] = {37,37,37,37};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,10,100,1000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	FlightDataRecorder * obj = new FlightDataRecorder();
	clock_t start = clock();
	double my_answer = obj->getDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 1111.0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;	//I want to eventually turn this into a time of some kind.
	}
}
double test2() {
	int t0[] = {0,120,240,0,120,240};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {999,999,999,999,999,999};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	FlightDataRecorder * obj = new FlightDataRecorder();
	clock_t start = clock();
	double my_answer = obj->getDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 6.431098710768743E-13;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;	//I want to eventually turn this into a time of some kind.
	}
}
double test3() {
	int t0[] = {76,321,214,132,0,359,74,65,213};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {621,235,698,1,35,658,154,426,965};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	FlightDataRecorder * obj = new FlightDataRecorder();
	clock_t start = clock();
	double my_answer = obj->getDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 153.54881555325184;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;	//I want to eventually turn this into a time of some kind.
	}
}
double test4() {
	int t0[] = {0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	FlightDataRecorder * obj = new FlightDataRecorder();
	clock_t start = clock();
	double my_answer = obj->getDistance(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p2 = 1.0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;	//I want to eventually turn this into a time of some kind.
	}
}

//Powered by [KawigiEdit]

int main() {
int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
