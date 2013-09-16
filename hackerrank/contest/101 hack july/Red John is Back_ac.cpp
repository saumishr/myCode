/*
 * Red John is Back
Red John has committed another murder. But this time, he doesn��t leave a red smiley behind. What he leaves behind is a puzzle for Patrick Jane to solve. He also texts Teresa Lisbon that if Patrick is successful, he will turn himself in. The puzzle begins as follows.

There is a wall of size CxN in the victim��s house where C is the 1st composite number. The victim also has an infinite supply of bricks of size Cx1 and 1xC in her house. There is a hidden safe which can only be opened by a particular configuration of bricks on the wall. In every configuration, the wall has to be completely covered using the bricks. There is a phone number written on a note in the safe which is of utmost importance in the murder case. Gale Bertram wants to know the total number of ways in which the bricks can be arranged on the wall so that a new configuration arises every time. He calls it M. Since Red John is back after a long time, he has also gained a masters degree in Mathematics from a reputed university. So, he wants Patrick to calculate the number of prime numbers (say P) up to M (i.e. <= M). If Patrick calculates P, Teresa should call Red John on the phone number from the safe and he will surrender if Patrick tells him the correct answer. Otherwise, Teresa will get another murder call after a week.

You are required to help Patrick correctly solve the puzzle.

Sample Input
The first line of input will contain an integer T followed by T lines each containing an integer N.

Sample Output
Print exactly one line of output for each test case. The output should contain the number P.

Constraints
1<=T<=20
1<=N<=40

Sample Input

2
1
7
Sample Output

0
3
Explanation

For N = 1, the brick can be laid in 1 format only

Red John1

The number of primes <= 1 is 0 and hence the answer.

For N = 7, one of the ways in which we can lay the bricks is

Red John

There are 5 ways of arranging the bricks for N = 7 and there are 3 primes <= 5 and hence the answer 3.
 */
#include <assert.h>
#include <ctype.h>
#include <float.h>
#include <cmath>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <numeric>
#include <functional>
#include <utility>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <memory.h>

using namespace std;

#define PI 3.14159265359
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,k,n) for (int i=(k); i<=(int)(n); ++i)

typedef long long LL;

LL num[41];
bool p[217287];
vector<int> prime;
int main() {
	//freopen("small.in", "r", stdin); //redirects standard input
	//freopen("small.out", "w", stdout);//redirects standard output
	num[0]=1;num[1]=1;num[2]=1;num[3]=1;num[4]=2;num[5]=3;num[6]=4;
	FOR(i,7,40){
		num[i]=1;
		REP(j,i-3)num[i]+=num[j];
	}
	//cout<<num[40];//217286
	FOR(i,2,217286){
		if(p[i]==0){
			prime.push_back(i);
			for(int j=i+i;j<=217286;j+=i)p[j]=1;
		}
	}
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		int j;
		for(j=0;j<prime.size();j++){
			if(prime[j]>num[a]){
				cout<<j<<endl;
				break;
			}
		}
		if(j==prime.size())cout<<j<<endl;
	}

}
