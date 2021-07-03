#include <bits/stdc++.h>
#include <chrono>
#include <ctime>

#define deb(x) cout << (#x) << " is " << (x) << endl
#define nline "\n"
#define read(x) int x; cin>>x
#define SaveTime() ios_base::sync_with_stdio(false);std::cin.tie(NULL)
typedef long long int ll;

const int MOD = 1000000007;

using namespace std;



int solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    if (a == 1) {
        if ((n - 1) % b == 0) {
            cout << "Yes" << nline;
        } else {
            cout << "No" << nline;
        }
        return 0;
    }
    ll s = 1;
    bool flag = false;
    while (s <= n) {
        if ((n - s) % b == 0) {
            flag = true;
            break;
        }
        s = s * a;
    }
    if (flag) {
        cout << "Yes" << nline;
    } else {
        cout << "No" << nline;
    }
    return 0;
}

int main() {
    SaveTime();
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    auto start1 = std::chrono::high_resolution_clock::now();
#endif

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
