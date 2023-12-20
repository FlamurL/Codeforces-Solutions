/*
D. Three Activities
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Winter holidays are coming up. They are going to last for n
 days.

During the holidays, Monocarp wants to try all of these activities exactly once with his friends:

go skiing;
watch a movie in a cinema;
play board games.
Monocarp knows that, on the i
-th day, exactly ai
 friends will join him for skiing, bi
 friends will join him for a movie and ci
 friends will join him for board games.

Monocarp also knows that he can't try more than one activity in a single day.

Thus, he asks you to help him choose three distinct days x,y,z
 in such a way that the total number of friends to join him for the activities (ax+by+cz
) is maximized.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of testcases.

The first line of each testcase contains a single integer n
 (3≤n≤105
) — the duration of the winter holidays in days.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤108
) — the number of friends that will join Monocarp for skiing on the i
-th day.

The third line contains n
 integers b1,b2,…,bn
 (1≤bi≤108
) — the number of friends that will join Monocarp for a movie on the i
-th day.

The fourth line contains n
 integers c1,c2,…,cn
 (1≤ci≤108
) — the number of friends that will join Monocarp for board games on the i
-th day.

The sum of n
 over all testcases doesn't exceed 105
.

Output
For each testcase, print a single integer — the maximum total number of friends that can join Monocarp for the activities on three distinct days.
*/

 
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<pair<int, int>> a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
     for(int i=0;i<n;i++){
         cin>>b[i].first;
        b[i].second=i;
    }
     for(int i=0;i<n;i++){
         cin>>c[i].first;
        c[i].second=i;
    }
     sort(a.rbegin(), a.rend()) ;
      sort(b.rbegin(), b.rend());
       sort(c.rbegin(), c.rend());
       int sol=0;
       for(int i=0;i<3;i++){
           for(int k=0;k<3;k++){
               for(int m=0;m<3;m++){
if(a[i].second!=b[k].second&&a[i].second!=c[m].second&&b[k].second!=c[m].second){
sol=max(sol,a[i].first+b[k].first+c[m].first);
}
               }
           }
       }
       cout<<sol<<endl;

}

}
