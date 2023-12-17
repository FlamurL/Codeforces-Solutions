/*
D. Plus Minus Permutation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given 3
 integers — n
, x
, y
. Let's call the score of a permutation†
 p1,…,pn
 the following value:

(p1⋅x+p2⋅x+…+p⌊nx⌋⋅x)−(p1⋅y+p2⋅y+…+p⌊ny⌋⋅y)

In other words, the score of a permutation is the sum of pi
 for all indices i
 divisible by x
, minus the sum of pi
 for all indices i
 divisible by y
.

You need to find the maximum possible score among all permutations of length n
.

For example, if n=7
, x=2
, y=3
, the maximum score is achieved by the permutation [2,6–,1–,7–,5,4––,3]
 and is equal to (6+7+4)−(1+4)=17−5=12
.

†
 A permutation of length n
 is an array consisting of n
 distinct integers from 1
 to n
 in any order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (the number 2
 appears twice in the array) and [1,3,4]
 is also not a permutation (n=3
, but the array contains 4
).

Input
The first line of input contains an integer t
 (1≤t≤104
) — the number of test cases.

Then follows the description of each test case.

The only line of each test case description contains 3
 integers n
, x
, y
 (1≤n≤109
, 1≤x,y≤n
).

Output
For each test case, output a single integer — the maximum score among all permutations of length n
.*/

#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    long long int n,x,y;
  cin>>n>>x>>y;
    long long int cntx=n/x;
      long long int cnty=n/y;
long long int save=x*y/__gcd(x,y);
 
     
    cntx-=n/save;
    cnty-=n/save;
 
   long long int sum=0;
 sum=n*(n+1)/2-(n-cntx)*(n-cntx+1)/2-cnty*(cnty+1)/2;
cout<<sum<<endl;
}
}