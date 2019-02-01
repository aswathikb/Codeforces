#include <bits/stdc++.h>
using namespace std;

int main() {
   int m,n,flag = 0;
   
   cin >> n >> m;
   char a[n][m];
   for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           cin >> a[i][j];
           if(a[i][j] == 'B' || a[i][j] == 'W' || a[i][j] == 'G')
           flag++;
       }
   }
   if(flag != (n*m))
   cout << "#Color";
   else
   cout << "#Black&White";
	// your code goes here
	return 0;
}
