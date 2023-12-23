/*
B. Good Arrays
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array of positive integers a
 of length n
.

Let's call an array of positive integers b
 of length n
 good if:

ai≠bi
 for all i
 from 1
 to n
,
a1+a2+…+an=b1+b2+…+bn
.
Does a good array exist?

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤105
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, output "YES" (without quotes) if there exists a good array, and "NO" (without quotes) otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs","yes", "Yes", and "YES" will be recognized as positive responses.*/

#include <iostream>
using namespace std;
int main() {
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int a[n];
    long long int sum=0;
    int cnt1=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            cnt1++;
        }
        
        sum+=a[i];
    }
    
  if(n==1){
        cout<<"NO"<<endl;
    }
   else if(sum<cnt1+n){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
 }   
}