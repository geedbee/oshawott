#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    cout << n;
    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
            cout << " " << n;
        }
        else{
            n = n * 3 + 1;
            cout << " " << n;
        }
    }
}

/*
NOTES:

int goes from about −2*10^9...2*10^9
use typedef to shorten long long
Collatz Conjecture - unproven, will all n eventually turn to 1?

*/