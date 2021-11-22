#include <iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int r=0,n;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> n;
            if (n) {
                r = abs(i - 2) + abs(j - 2);
            }
        }
    } 
    cout << r;
    return 0;
}
