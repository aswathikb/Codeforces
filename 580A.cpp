#include<bits/stdc++.h>
using namespace std;

int main(){
int n, ans = 1, count = 1;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
        cin >> a[i];
}
for(int i = 0; i < n; i++){
    if (a[i] >= a[i-1])
        count++;
    else
    {
        if (ans < count)
            ans = count;
        count = 1;
   }
}
 if (ans < count)
        ans = count;
cout << ans;
return 0;
}

    
