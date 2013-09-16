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



class EllysNewNickname {
public:
	int getLength(string);
};

int EllysNewNickname::getLength(string s) {
	int ans=1;
	for(int i=1;i<s.size();i++){
		if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'
		||(s[i-1]!='a'&&s[i-1]!='e'&&s[i-1]!='i'&&s[i-1]!='o'&&s[i-1]!='u'&&s[i-1]!='y'))
		ans++;
			}
	return ans;
}


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
	cout << "]" << endl;
	EllysNewNickname *obj;
	int answer;
	obj = new EllysNewNickname();
	clock_t startTime = clock();
	answer = obj->getLength(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
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
	
	string p0;
	int p1;
	
	{
	// ----- test 0 -----
	p0 = "tourist";
	p1 = 6;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "eagaeoppooaaa";
	p1 = 6;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "esprit";
	p1 = 6;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "ayayayayayaya";
	p1 = 1;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "wuuut";
	p1 = 3;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "naaaaaaaanaaaanaananaaaaabaaaaaaaatmaaaaan";
	p1 = 16;
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
// Elly recently learned that vowels (the letters 'a', 'e', 'i', 'o', 'u' and 'y') are no longer cool on the internet. That's why now she wants to remove some of the vowels in the nickname she uses. Elly wants her new nickname to contain no consecutive vowels, but she still wants to keep as many characters as possible.
// You are given the current nickname Elly uses in the string nickname. Return its new length after it gets shortened.
// 
// DEFINITION
// Class:EllysNewNickname
// Method:getLength
// Parameters:string
// Returns:int
// Method signature:int getLength(string nickname)
// 
// 
// NOTES
// -Note that no matter which vowels Elly decides to remove, the length of the resulting nickname will be the same.
// -In Elly's language (and in this problem) 'y' is considered a vowel.
// 
// 
// CONSTRAINTS
// -nickname will contain between 1 and 50 characters, inclusive.
// -nickname will contain only small letters of the English alphabet ('a'-'z').
// 
// 
// EXAMPLES
// 
// 0)
// "tourist"
// 
// Returns: 6
// 
// The nickname "tourist" can become either "turist" or "torist". Its new length will be 6 characters.
// 
// 1)
// "eagaeoppooaaa"
// 
// Returns: 6
// 
// Although there are many possible resulting nicknames, her strategy guarantees that the length of all of them will be 6. One of the possibilities in this case is "ageppo".
// 
// 2)
// "esprit"
// 
// Returns: 6
// 
// There are cases in which the nickname remains the same.
// 
// 3)
// "ayayayayayaya"
// 
// Returns: 1
// 
// The initial nickname can contain only vowels or only consonants.
// 
// 4)
// "wuuut"
// 
// Returns: 3
// 
// Wut?
// 
// 5)
// "naaaaaaaanaaaanaananaaaaabaaaaaaaatmaaaaan"
// 
// Returns: 16
// 
// 
// 
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
