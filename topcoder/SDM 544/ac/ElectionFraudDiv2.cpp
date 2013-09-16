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
#include <cstring>

using namespace std;

#define PI 3.14159265359
#define REP(i,n) for(LL i=0;i<(n);++i)
#define FOR(i,k,n) for (LL i=(k); i<=(LL)(n); ++i)
#define X first
#define Y second
#define CLR(x) memset((x), 0, sizeof(x))
#define PB push_back
#define MP make_pair
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef long long LL;
typedef long double LD;

class ElectionFraudDiv2 {
public:
	string IsFraudulent(vector <int>);
};

string ElectionFraudDiv2::IsFraudulent(vector <int> p) {
	double mn=0,mx=0;
	REP(i,p.size()){
		mn+=max(0.0,p[i]-0.5);
		mx+=p[i]+0.5;
	}
	if(mx>100&&100>=mn)return "NO";
	return "YES";
}

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, vector <int> p0, bool hasAnswer, string p1) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p0[i];
	}
	cout << "}";
	cout << "]" << endl;
	ElectionFraudDiv2 *obj;
	string answer;
	obj = new ElectionFraudDiv2();
	clock_t startTime = clock();
	answer = obj->IsFraudulent(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p1 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p1;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	vector <int> p0;
	string p1;
	
	{
	// ----- test 0 -----
	int t0[] = {100};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "NO";
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	int t0[] = {34,34,34};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "YES";
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	int t0[] = {12,12,12,12,12,12,12,12};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "YES";
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	int t0[] = {13,13,13,13,13,13,13,13};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "NO";
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	int t0[] = {0,1,100};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "NO";
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	int t0[] = {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8};
			p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
	p1 = "NO";
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// PROBLEM STATEMENT
// In a normal election, one expects the percentages received by each of the candidates to sum to exactly 100 percent.  There are two ways this might not be the case: if the election is fraudulent, or if the reported percentages are rounded.
// In a recent election, the number of voters was known to be exactly 10000.  Assuming the election was run fairly, each voter voted for exactly one candidate.  The percentage of the vote received by each candidate was rounded to the nearest whole number before being reported.  Percentages lying halfway between two consecutive whole numbers were rounded up.
// The ministry of voting is looking for a proof of election fraud.  You'll be given a vector <int> percentages, giving the reported percentage of the vote that went to each candidate.  Return a string containing "YES" if the election is definitely fraudulent, otherwise return "NO" (quotes for clarity only).  That is, return "YES" if it could not be the case that each of the 10000 voters voted for exactly one candidate, and "NO" otherwise.
// 
// DEFINITION
// Class:ElectionFraudDiv2
// Method:IsFraudulent
// Parameters:vector <int>
// Returns:string
// Method signature:string IsFraudulent(vector <int> percentages)
// 
// 
// CONSTRAINTS
// -percentages will contain between 1 and 50 elements, inclusive.
// -Each element of percentages will be between 0 and 100, inclusive.
// 
// 
// EXAMPLES
// 
// 0)
// {100}
// 
// Returns: "NO"
// 
// If there's only one candidate, that candidate will receive 100% of the votes in a fair election.
// 
// 1)
// {34, 34, 34}
// 
// Returns: "YES"
// 
// Even accounting for rounding, these numbers are too high.
// 
// 2)
// {12, 12, 12, 12, 12, 12, 12, 12}
// 
// Returns: "YES"
// 
// These numbers are too low.
// 
// 3)
// {13, 13, 13, 13, 13, 13, 13, 13}
// 
// Returns: "NO"
// 
// Each candidate could have received exactly 1250 votes.
// 
// 4)
// {0, 1, 100}
// 
// Returns: "NO"
// 
// The only valid possibility is that the candidates received 0, 50, and 9950 votes, respectively.
// 
// 5)
// {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8}
// 
// Returns: "NO"
// 
// 
// 
// END KAWIGIEDIT TESTING

//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!