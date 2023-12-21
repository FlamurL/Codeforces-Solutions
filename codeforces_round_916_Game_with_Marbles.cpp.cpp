/*
E2. Game with Marbles (Hard Version)
time limit per test3.5 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
The easy and hard versions of this problem differ only in the constraints on the number of test cases and n
. In the hard version, the number of test cases does not exceed 104
, and the sum of values of n
 over all test cases does not exceed 2⋅105
. Furthermore, there are no additional constraints on n
 in a single test case.

Recently, Alice and Bob were given marbles of n
 different colors by their parents. Alice has received a1
 marbles of color 1
, a2
 marbles of color 2
,..., an
 marbles of color n
. Bob has received b1
 marbles of color 1
, b2
 marbles of color 2
, ..., bn
 marbles of color n
. All ai
 and bi
 are between 1
 and 109
.

After some discussion, Alice and Bob came up with the following game: players take turns, starting with Alice. On their turn, a player chooses a color i
 such that both players have at least one marble of that color. The player then discards one marble of color i
, and their opponent discards all marbles of color i
. The game ends when there is no color i
 such that both players have at least one marble of that color.

The score in the game is the difference between the number of remaining marbles that Alice has and the number of remaining marbles that Bob has at the end of the game. In other words, the score in the game is equal to (A−B)
, where A
 is the number of marbles Alice has and B
 is the number of marbles Bob has at the end of the game. Alice wants to maximize the score, while Bob wants to minimize it.

Calculate the score at the end of the game if both players play optimally.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of three lines:

the first line contains a single integer n
 (2≤n≤2⋅105
) — the number of colors;
the second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
), where ai
 is the number of marbles of the i
-th color that Alice has;
the third line contains n
 integers b1,b2,…,bn
 (1≤bi≤109
), where bi
 is the number of marbles of the i
-th color that Bob has.
Additional constraint on the input: the sum of n
 for all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer — the score at the end of the game if both Alice and Bob act optimally.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<long long int, long long int>>sum(n);
    //sum.first is going to be the sum of a[i]+b[i] and sum.second is going to be i
    for(int i=0;i<n;i++){
        sum[i].first=a[i]+b[i];
        sum[i].second=i;
    }
    sort(sum.rbegin(),sum.rend());
    long long int sol=0;
    for(int i=0;i<n;i++){
    long long int s=sum[i].second;
        if(i%2==0){
            sol+=a[s]-1;
        }
        else{
            sol-=b[s]-1;
        }
    }
    cout<<sol<<endl;

}
}
