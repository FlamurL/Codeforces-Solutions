/*
C. Non-coprime Split
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given two integers l≤r
. You need to find positive integers a
 and b
 such that the following conditions are simultaneously satisfied:

l≤a+b≤r
gcd(a,b)≠1
or report that they do not exist.

gcd(a,b)
 denotes the greatest common divisor of numbers a
 and b
. For example, gcd(6,9)=3
, gcd(8,9)=1
, gcd(4,2)=2
.

Input
The first line of the input contains an integer t
 (1≤t≤500
) — the number of test cases.

Then the descriptions of the test cases follow.

The only line of the description of each test case contains 2
 integers l,r
 (1≤l≤r≤107
).

Output
For each test case, output the integers a,b
 that satisfy all the conditions on a separate line. If there is no answer, instead output a single number −1
.

If there are multiple answers, you can output any of them.
.*/

#include <bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin>>t;
 while(t--){
     int a,b;
     cin>>a>>b;
     if(b<4){
         cout<<-1;
         
     }
     else if(b==4){
cout<<2<<" "<<2;
     }
     else if(a<b){
         if(b%2==0){
             cout<<b-2<<" "<<2;
         }
          
         else if(b%2==1){
             cout<<b-3<<" "<<2;
         }
 
     }
     else{
  bool is=false;
        for(int i=2;i<=sqrt(a);i++){
          
            if(a%i==0){
          is=true;
                cout<<i<<" "<<a-i;
            break;
            }
 
        }
        if(is==false)
        cout<<-1;
     }
     cout<<endl;
 }
}