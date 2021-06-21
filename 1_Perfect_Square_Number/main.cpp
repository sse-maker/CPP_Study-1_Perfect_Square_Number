//
//  main.cpp
//  1_Perfect_Square_Number
//
//  Created by 세광 on 2021/06/21.
//

#include <iostream>
#include <cmath> // 수학 함수를 가지고 있는 헤더파일

using namespace std;

int main() {
    int m, n;
    cin >> m;
    cin >> n;
    int min = n;
    int sum = 0;
    
    for(int i = m; i <= n; i++) {
        if((sqrt(i) -(int)sqrt(i)) == 0) {
            sum += i;
            if(min > i) {
                min = i;
            }
        }
    }
    
    if(sum != 0) {
        cout << sum << endl;
        cout << min << endl;
    }
    else {
        cout << "-1" << endl;
    }
}
