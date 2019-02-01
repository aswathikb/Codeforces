#include<bits/stdc++.h>
using namespace std;

int main(){
int n, count1 = 1, count2 = 0;
cin >> n;
vector<string> s;      
    string team;       
string q;

for(int i = 0; i < n; i++){
          cin  >> team;
          s.push_back(team);
          }         
          if(n == 1){
          cout << s[0];
          return 0;
          }
for(int i = 1; i < n; i++){
          if(s[0] == s[i])
          count1++;
          else{
          count2++;
          q = s[i];
          }
          }
          if(count1 > count2)
          cout << s[0];
          else
          cout << q;
return 0;
}
