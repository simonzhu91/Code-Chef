#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>
 
using namespace std;
 
typedef long long int64;
typedef unsigned long long uint64;
#define two(X) (1<<(X))
#define twoL(X) (((int64)(1))<<(X))
#define contain(S,X) (((S)&two(X))!=0)
#define containL(S,X) (((S)&twoL(X))!=0)
const double pi=acos(-1.0);
const double eps=1e-11;
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}
template<class T> inline T sqr(T x){return x*x;}
typedef pair<int,int> ipair;
#define SIZE(A) ((int)A.size())
#define LENGTH(A) ((int)A.length())
#define MP(A,B) make_pair(A,B)
#define PB(X) push_back(X)
 
int solve(int a,int b)
{
	if (a<b) swap(a,b);
	if (a%b==0) return a/b-1;
	int d=solve(b,a%b);
	int c=a/b;
	return (c<=d)?(c-1):c;
}
int main()
{
#ifdef _MSC_VER
	freopen("input.txt","r",stdin);
#endif
	int testcase;
	for (scanf("%d",&testcase);testcase>0;testcase--)
	{
		int n;
		scanf("%d",&n);
		int s=0;
		for (int i=0;i<n;i++)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			s^=solve(a,b);
		}
		if (s)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
