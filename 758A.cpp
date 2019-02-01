#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l = 0,k, sum = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > l)
        l = a[i];
        sum += a[i];
    }
    k = l * n;
    int ans = k - sum;
    cout << ans;
  return 0;
 }

