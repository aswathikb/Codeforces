#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,j;
cin >> a >> b >>  c;
int p[10];
p[0] = a+b+c;
p[1] = (a+b)*c;
p[2] = a+(b*c);
p[3] = a*(b+c);
p[4] = (a*b)+c;
p[5] = a*b*c;
for(int i = 0; i < 5; i++){
        for (j = 0; j < 6-i-1; j++)  
           if (p[j] > p[j+1]) {
                   int temp = p[j];
                   p[j] = p[j+1];
                   p[j+1] = temp;
           }
              
}
cout << p[5];


return 0;
}
