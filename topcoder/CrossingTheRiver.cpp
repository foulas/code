#line 2 "CrossingTheRiver.cpp"
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
class CrossingTheRiver
        {
        public:
        string isItEvenPossible(int waterWidth, int landWidth, vector <int> blockHeight, int depth)
            {
            //$CARETPOSITION$
            }
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 3; int Arr2[] = {3,4,4,5,5, 6}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 2; string Arg4 = "POSSIBLE"; verify_case(0, Arg4, isItEvenPossible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 3; int Arr2[] = {3,4,4,5,6, 6}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 2; string Arg4 = "IMPOSSIBLE"; verify_case(1, Arg4, isItEvenPossible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 5; int Arg1 = 2; int Arr2[] = {4,4,4,4,4}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 4; string Arg4 = "POSSIBLE"; verify_case(2, Arg4, isItEvenPossible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 5; int Arg1 = 5; int Arr2[] = {5,5,5,5,5,5, 2,3,4,4,6, 7, 3, 2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 2; string Arg4 = "POSSIBLE"; verify_case(3, Arg4, isItEvenPossible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 5; int Arg1 = 7; int Arr2[] = {6,6,6,6,6,6,6, 6,6,6,6,6,7,8,9,10}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 5; string Arg4 = "POSSIBLE"; verify_case(4, Arg4, isItEvenPossible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_5() { int Arg0 = 1; int Arg1 = 1; int Arr2[] = {5,3,4}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 2; string Arg4 = "IMPOSSIBLE"; verify_case(5, Arg4, isItEvenPossible(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

        };

    // BEGIN CUT HERE
    int main()
        {
        CrossingTheRiver ___test;
        ___test.run_test(-1);
        system("pause");
        }
    // END CUT HERE 

