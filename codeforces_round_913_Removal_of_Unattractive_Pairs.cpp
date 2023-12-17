/*
C. Removal of Unattractive Pairs
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vlad found a string s
 consisting of n
 lowercase Latin letters, and he wants to make it as short as possible.

To do this, he can remove any pair of adjacent characters from s
 any number of times, provided they are different. For example, if s
=racoon, then by removing one pair of characters he can obtain the strings coon, roon, raon, and raco, but he cannot obtain racn (because the removed letters were the same) or rcon (because the removed letters were not adjacent).

What is the minimum length Vlad can achieve by applying any number of deletions?

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases. Descriptions of the test cases follow.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the length of the string s
.

The second line of each test case contains the string s
 consisting of n
 lowercase Latin letters.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single number—the minimum length of the string s
, after removing pairs of adjacent characters with different values.
.*/

#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       map<char,int>m;
       for(int i=0;i<n;i++){
           m[s[i]]++;
       }
   int    maxi=0;
        for(int i=0;i<n;i++){
          maxi=max( m[s[i]],maxi);
       }
       if(maxi<n-maxi){
           if(n%2==1)
           cout<<1;
           else
           cout<<0;
       }
       else{
          cout<< n-( (n-maxi)*2);
       }
   cout<<endl;
     }
 
}