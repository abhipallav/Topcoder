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

class Robofactory {
public:
	int reveal(vector <int>, vector <string>);
};

int Robofactory::reveal(vector <int> query, vector <string> answer) {
	vector<int>possible;
	for(int i=0;i<query.size();i++){
		if(query[i]%2==0){
			if(answer[i]=="Odd") return i;
		} else {
			if(answer[i]=="Even") return i;
		}
		
		if(i==0 || answer[i-1]=="Even"){
			possible.push_back(i);
		}
	}
	
	if(possible.size()==1) return possible[0];
	return -1;
}

double test0() {
	int t0[] = {3,2,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	string t1[] = {"Odd", "Odd", "Even"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Robofactory * obj = new Robofactory();
	clock_t start = clock();
	int my_answer = obj->reveal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
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
	int t0[] = {1,3,5,10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	string t1[] = {"Odd", "Odd", "Odd", "Even"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Robofactory * obj = new Robofactory();
	clock_t start = clock();
	int my_answer = obj->reveal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
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
	int t0[] = {2,3,5,10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	string t1[] = {"Even", "Odd", "Odd", "Even"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Robofactory * obj = new Robofactory();
	clock_t start = clock();
	int my_answer = obj->reveal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
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
	int t0[] = {2,4,6,10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	string t1[] = {"Even", "Even", "Even", "Even"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Robofactory * obj = new Robofactory();
	clock_t start = clock();
	int my_answer = obj->reveal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
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
	int t0[] = {107};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	string t1[] = {"Odd"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Robofactory * obj = new Robofactory();
	clock_t start = clock();
	int my_answer = obj->reveal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
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
double test5() {
	int t0[] = {1,1,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	string t1[] = {"Odd", "Odd", "Even"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Robofactory * obj = new Robofactory();
	clock_t start = clock();
	int my_answer = obj->reveal(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}
