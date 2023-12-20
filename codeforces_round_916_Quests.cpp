/*
C. Quests
time limit per test2.5 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Monocarp is playing a computer game. In order to level up his character, he can complete quests. There are n
 quests in the game, numbered from 1
 to n
.

Monocarp can complete quests according to the following rules:

the 1
-st quest is always available for completion;
the i
-th quest is available for completion if all quests j<i
 have been completed at least once.
Note that Monocarp can complete the same quest multiple times.

For each completion, the character gets some amount of experience points:

for the first completion of the i
-th quest, he gets ai
 experience points;
for each subsequent completion of the i
-th quest, he gets bi
 experience points.
Monocarp is a very busy person, so he has free time to complete no more than k
 quests. Your task is to calculate the maximum possible total experience Monocarp can get if he can complete no more than k
 quests.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and k
 (1≤n≤2⋅105
; 1≤k≤2⋅105
) — the number of quests and the maximum number of quests Monocarp can complete, respectively.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤103
).

The third line contains n
 integers b1,b2,…,bn
 (1≤bi≤103
).

Additional constraint on the input: the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, print a single integer — the maximum possible total experience Monocarp can get if he can complete no more than k
 quests.
*/

 
#include <iostream>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
  int n,k;
  cin>>n>>k;
  int a[n],b[n];
  int sum_of_a[n];
  int max_of_b[n];
 
  for(int i=0;i<n;i++){
      cin>>a[i];
 
  }
  
 for(int i=0;i<n;i++){
        cin>>b[i];
  
 
  }
    sum_of_a[0]=a[0];
    for(int i=1;i<n;i++){
     sum_of_a[i]=a[i]+sum_of_a[i-1];
  }
    max_of_b[0]=b[0];
  for(int i=1;i<n;i++){
 
       
    max_of_b[i]=max(max_of_b[i-1],b[i]);
 
  }
  int ans=0;
  for(int i=0;i<n;i++){
 
      if(i>=k)
      break;
      ans=max(sum_of_a[i]+(k-i-1)*max_of_b[i],ans);
  }
cout<<ans<<endl;
 
}
 
}