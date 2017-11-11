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

class TCPhoneHomeEasy {
public:
	int validNumbers(int, vector <string>);
};


bool is_prefix(string a, string b){
 	if(a.size()>b.size()){
 		return false;
 	}
 	
 	return b.find(a)==0;
}

int TCPhoneHomeEasy::validNumbers(int digits, vector <string> specialPrefixes) {
	int n = specialPrefixes.size();
	vector<bool> f(n, false);
	for(int i=0; i<n;i++){
		for(int j=0; j<n;j++){
			if(i!=j){
				if(is_prefix(specialPrefixes[j],specialPrefixes[i])){
					f[j]=true;
				}
			}
		}
	}
	
	int total = pow(10,digits);
	for(int i=0;i<n;i++){
		if(!f[i]){
			total -= pow(10, digits-specialPrefixes[i].size());
		}
	}
	
	return total;
}

double test0() {
	int p0 = 7;
	string t1[] = { "0", "1", "911" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	TCPhoneHomeEasy * obj = new TCPhoneHomeEasy();
	clock_t start = clock();
	int my_answer = obj->validNumbers(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 7990000;
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
	int p0 = 5;
	string t1[] = { "0", "1", "911" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	TCPhoneHomeEasy * obj = new TCPhoneHomeEasy();
	clock_t start = clock();
	int my_answer = obj->validNumbers(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 79900;
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
	int p0 = 6;
	string t1[] = { "1", "2", "3" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	TCPhoneHomeEasy * obj = new TCPhoneHomeEasy();
	clock_t start = clock();
	int my_answer = obj->validNumbers(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 700000;
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
	int p0 = 6;
	string t1[] = { "1", "23", "345" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	TCPhoneHomeEasy * obj = new TCPhoneHomeEasy();
	clock_t start = clock();
	int my_answer = obj->validNumbers(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 889000;
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
	int p0 = 3;
	string t1[] = {"411"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	TCPhoneHomeEasy * obj = new TCPhoneHomeEasy();
	clock_t start = clock();
	int my_answer = obj->validNumbers(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 999;
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
