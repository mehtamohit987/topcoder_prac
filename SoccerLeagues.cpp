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

class SoccerLeagues {
public:
	vector <int> points(vector <string>);
};

vector <int> SoccerLeagues::points(vector <string> matches) {
	
	vector<int> V;int ans;
	for(int i=0;i<matches.size();i++)
	{
		ans=0;
	
		for(int j=0;j<matches.size();j++)
		if(j!=i){
			if(matches[i][j]=='W') ans+=3;
			if(matches[i][j]=='D') ans+=1;
		}
		
		for(int j=0;j<matches.size();j++)
		if(j!=i){
			if(matches[j][i]=='L') ans+=3;
			if(matches[j][i]=='D') ans+=1;
		}
		V.push_back(ans);
	
	}
	return V;
	
}


double test0() {
	string t0[] = {"-WW",
 "W-W",
 "WW-"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SoccerLeagues * obj = new SoccerLeagues();
	clock_t start = clock();
	vector <int> my_answer = obj->points(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {6, 6, 6 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"-DD",
 "L-L",
 "WD-"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SoccerLeagues * obj = new SoccerLeagues();
	clock_t start = clock();
	vector <int> my_answer = obj->points(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {5, 2, 8 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"-DWWD",
 "L-WLL",
 "DD-WD",
 "DDL-L",
 "DDLL-"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SoccerLeagues * obj = new SoccerLeagues();
	clock_t start = clock();
	vector <int> my_answer = obj->points(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {14, 7, 12, 8, 10 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"-LWWLWDLDWWWWWWDDWDW",
 "D-WWLDDWDWDLWDDWLWDD",
 "LL-DLDWDLDLDWWWLWDDW",
 "LDD-LLLDLWLWWWWDWDWL",
 "LWWW-DWDLWDWDWWWDWDW",
 "DLLWD-WWLLDDDLWWDWWW",
 "WWLWDL-LLDWWWWWDWWLW",
 "LLLLLDW-LDLWDDLLLDWL",
 "DWWWWDDD-DWWWWDWWWDW",
 "WWWWLLLWL-LWWWWWLWWW",
 "DWWWWWWWLW-WDWWWWWWW",
 "DDDLLLDWWWL-DDWDWLDD",
 "LWLWLDLLLDLW-DDDWWDD",
 "LLWWLWDDLWLWL-WWWDLL",
 "WWWWLLDDDWLWDD-WWWLW",
 "DLDLLLWWLLLWWLW-DWLL",
 "DLWWWLDLWWDWWDWL-WWD",
 "LLDDLLWLLWLWLDLWW-WW",
 "LLWLLLWWLWLWWDWWLD-W",
 "LLWDLWDWDWLLWWDDWWL-"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	SoccerLeagues * obj = new SoccerLeagues();
	clock_t start = clock();
	vector <int> my_answer = obj->points(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int t1[] = {72, 62, 41, 41, 83, 63, 53, 35, 86, 50, 90, 32, 34, 41, 45, 36, 51, 32, 51, 45 };
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<p1[0];
		for (int i=1; i<p1.size(); i++)
			cout <<", " <<p1[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<my_answer[0];
		for (int i=1; i<my_answer.size(); i++)
			cout <<", " <<my_answer[i];
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
