#include <bits/stdc++.h>

int main() {

    int n;

    std::cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {

        std::cin >> a[i];

        if(a[i] == 1) {

        std::cout << "HARD";

        return 0;

        }

    }

    std::cout << "EASY";

	
  return 0;

}
