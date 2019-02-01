#include<bits/stdc++.h>
using namespace std;

int main(){
int n, A = 0, D = 0;
string s;
cin >> n >> s;
for(int i = 0; i < n; i++){
        if(s[i] == 'A')
        A += 1;
        else
        D += 1;
}
if( A > D)
cout << "Anton";
else if(A == D)
cout << "Friendship";
else
cout <<"Danik" ;





return 0;
}
