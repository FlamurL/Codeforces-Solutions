#include <iostream>
using namespace std;
int main() {
 int t;
 cin>>t;
 while(t--){
     string a,b;
     cin>>a>>b;
    
    
         bool is=false;
     for(int i=0;i<a.size();i++){
  if (a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && a[i + 1] == '1') {
               cout<<"YES"<<endl;
               is=true;
               break;
            }

     
     }
     if(is==false){
         cout<<"NO"<<endl;
     }
     
 }
}