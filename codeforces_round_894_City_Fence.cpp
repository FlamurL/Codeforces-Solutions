#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
   
      if(a[0]!=n){
          cout<<"NO"<<endl;
 
      }
      else {
         
 
         vector<int> sym;
        for (int i = n-1; i >= 0; i--) {
            while (sym.size() < a[i]) {
                sym.push_back(i+1);
            }
        }
         bool is=true;
        
        for (int i = 0; i < n; i++) {
            if (a[i] != sym[i]) {
                cout << "NO" << endl;
                is = false;
                break;
            }
        }
          if(is==true){
              cout<<"YES"<<endl;
          }
      }
  }
}