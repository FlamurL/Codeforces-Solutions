/*
B. Longest Divisors Interval
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a positive integer n
, find the maximum size of an interval [l,r]
 of positive integers such that, for every i
 in the interval (i.e., l≤i≤r
), n
 is a multiple of i
.

Given two integers l≤r
, the size of the interval [l,r]
 is r−l+1
 (i.e., it coincides with the number of integers belonging to the interval).

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The only line of the description of each test case contains one integer n
 (1≤n≤1018
).

Output
For each test case, print a single integer: the maximum size of a valid interval.

*/

#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){ 
    long long int n;
    cin>>n;
 
 
    int cnt=0;
    for(long long int i=1;i<=n;i++){
        if(n%i==0) 
        cnt++;
        else
        break;
    }
 
    cout<<cnt<<endl;
    }
}
