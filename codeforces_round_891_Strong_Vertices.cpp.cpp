/*
C. Assembly via Minimums
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Sasha has an array a
 of n
 integers. He got bored and for all i
, j
 (i<j
), he wrote down the minimum value of ai
 and aj
. He obtained a new array b
 of size n⋅(n−1)2
.

For example, if a=
 [2,3,5,1
], he would write [min(2,3),min(2,5),min(2,1),min(3,5),min(3,1),min(5,1)
] =
 [2,2,1,3,1,1
].

Then, he randomly shuffled all the elements of the array b
.

Unfortunately, he forgot the array a
, and your task is to restore any possible array a
 from which the array b
 could have been obtained.

The elements of array a
 should be in the range [−109,109]
.

Input
The first line contains a single integer t
 (1≤t≤200
) — the number of test cases.

The first line of each test case contains a single integer n
 (2≤n≤103
) — the length of array a
.

The second line of each test case contains n⋅(n−1)2
 integers b1,b2,…,bn⋅(n−1)2
 (−109≤bi≤109
) — the elements of array b
.

It is guaranteed that the sum of n
 over all tests does not exceed 103
 and for each array b
 in the test, there exists an original array.

Output
For each test case, output any possible array a
 of length n
.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=n*(n-1)/2;
        int b[m];
        for(int i=0;i<m;i++){ 
            cin>>b[i];
        }
        sort(b,b+m);
        for(int i=0;i<m;i+=--n){ 
        cout<<b[i]<<' ';
        }
        int last=1e9;
        cout<<last<<endl;
    }
}
