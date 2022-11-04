#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   \
    int n;
    cin >> n;
    queue <int> res;
    while (n--) {
        int ele;
        cin >> ele;
        
        if ( ele == 1){
            int p;
            cin >> p;
            res.push(p);
        }
        else if ( ele == 2) {
            res.pop();
        }
        else if ( ele == 3) {
            cout << res.front()<<endl;
        }
    }
    return 0;
}
