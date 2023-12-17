/*
A. Rook
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
As you probably know, chess is a game that is played on a board with 64 squares arranged in an 8×8
 grid. Columns of this board are labeled with letters from a to h, and rows are labeled with digits from 1 to 8. Each square is described by the row and column it belongs to.


The rook is a piece in the game of chess. During its turn, it may move any non-zero number of squares horizontally or vertically. Your task is to find all possible moves for a rook on an empty chessboard.

Input
The first line of input contains single integer t
 (1≤t≤64
) — the number of test cases. The descriptions of test cases follow.

Each test case contains one string of two characters, description of the square where rook is positioned. The first character is a letter from a to h, the label of column, and the second character is a digit from 1 to 8, the label of row.

The same position may occur in more than one test case.

Output
For each test case, output descriptions of all squares where the rook can move, in the same format as in the input.*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=1;i<9;i++){
        
            if(i!=(int)s[1]-48){
                cout<<s[0]<<i;
            cout<<endl;
            }
           
        }
         
            if(s[0]!='a'){
                cout<<"a"<<s[1];
                 cout<<endl;
            }
              if(s[0]!='b'){
                cout<<"b"<<s[1];
                 cout<<endl;
            }
              if(s[0]!='c'){
                cout<<"c"<<s[1];
                 cout<<endl;
            }
              if(s[0]!='d'){
                cout<<"d"<<s[1];
             cout<<endl;
            }
              if(s[0]!='e'){
                cout<<"e"<<s[1];
             cout<<endl;
            }
              if(s[0]!='f'){
                cout<<"f"<<s[1];
                 cout<<endl;
            }
              if(s[0]!='g'){
                cout<<"g"<<s[1];
                   cout<<endl;
            }
              if(s[0]!='h'){
                cout<<"h"<<s[1];
                   cout<<endl;
            }
 
           
        
    }
}