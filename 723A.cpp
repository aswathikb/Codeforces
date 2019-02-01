#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    sort(a, a+3);
    int mid = (a[0] + a[2])/2;
    int ans = 0;
    for(int i = 0; i < 3; i++){
        if(a[i] > mid)
        ans += (a[i] - mid);
        else
        ans += mid - a[i];
    }
    cout << ans;
    
  return 0;
 };

