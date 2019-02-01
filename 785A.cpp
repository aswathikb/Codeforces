#include<bits/stdc++.h>
using namespace std;

int main(){
int n, sum = 0;
cin >> n;
string k;
for(int i = 0; i < n; i++){
        cin >> k;
        if(k == "Icosahedron")
        sum += 20;
        else if(k == "Dodecahedron")
        sum += 12;
        else if(k == "Octahedron")
        sum += 8;
        else if(k == "Cube")
        sum += 6;
        else if(k == "Tetrahedron")
        sum += 4;
        
}
cout << sum;
return 0;
}

    
