#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k,l,count = 0;
cin >> n;
vector<int>p;
vector<int >q;
for(int i = 0; i < n; i++){
          cin >> k;
          cin >> l;
          p.push_back(k);
          q.push_back(l);
          if(p[i] <= q[i]-2)
          count++;
          
}
cout << count;
return 0;
}
