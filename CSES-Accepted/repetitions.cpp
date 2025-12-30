#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int maxCount = 1;
    char current = s[0];
    int currentCount = 0;
    for (char c: s){
        if (c == current){
            currentCount += 1;
            maxCount = max(maxCount, currentCount);
        }
        else {
            current = c;
            currentCount = 1;
        }
    }

    cout << maxCount;
    return 0;
}