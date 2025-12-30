#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<bool> v(n + 1);

    for (int i = 1; i <= n - 1; i++) {
        int x;
        cin >> x;
        v[x] = true;
    }
    for (int i = 1; i <= n; i++) {
        if (!v[i]) {
            cout << i;
        }
    }
}
/*
NOTES:

No vector solution- just sum n(n+1)/2, then subtract sum of input

*/