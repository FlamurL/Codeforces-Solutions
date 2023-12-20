/*
A. Problemsolving Log
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Monocarp is participating in a programming contest, which features 26
 problems, named from 'A' to 'Z'. The problems are sorted by difficulty. Moreover, it's known that Monocarp can solve problem 'A' in 1
 minute, problem 'B' in 2
 minutes, ..., problem 'Z' in 26
 minutes.

After the contest, you discovered his contest log — a string, consisting of uppercase Latin letters, such that the i
-th letter tells which problem Monocarp was solving during the i
-th minute of the contest. If Monocarp had spent enough time in total on a problem to solve it, he solved it. Note that Monocarp could have been thinking about a problem after solving it.

Given Monocarp's contest log, calculate the number of problems he solved during the contest.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of testcases.

The first line of each testcase contains a single integer n
 (1≤n≤500
) — the duration of the contest, in minutes.

The second line contains a string of length exactly n
, consisting only of uppercase Latin letters, — Monocarp's contest log.

Output
For each testcase, print a single integer — the number of problems Monocarp solved during the contest.
*/

 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
int a;
cin>>a;
string s;
cin>>s;
map<char,int>m;
 
for(int i=0;i<a;i++){
m[s[i]]++;
 
}
int cnt=0;
for (auto const& x : m){ 
if(x.second>=int(x.first)-64)
cnt++;
 
}
 
 
 
 
cout<<cnt<<endl;
    }
}