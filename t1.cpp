#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pii pair<int, int>
#define fr(n) for (int i = 0; i < n; i++)
#define fr1(n) for (int i = 1; i <= n; i++)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int rng =15433;
    int T;
    cin >> T;
    for (int U = 1; U <= T; U++) {
        cout << "Case #" << U << ": ";
        int r, c;
        cin >> r >> c;
        if (r + c <= 6) {
            cout << "IMPOSSIBLE\n";
            continue;
        }
        cout << "POSSIBLE\n";
        for (int t = 0; t < 100; t++) {
            vector<pii> a, z;
            pii x ;
			x = {328, mod};
            fr(r) for (int j = 0; j < c; j++) a.push_back({i, j});
            bool y = 0;
            for (int i = r * c; i; i--) {
                int q = rng % i;
                bool p = 0;
                cout <<q<<endl;
                for (int r = q; r < i; r++) {
                    if (a[r].first != x.first && a[r].second != x.second && a[r].first + a[r].second != x.first + x.second && a[r].first - a[r].second != x.first - x.second) {
                        z.push_back(a[r]);
                        x = a[r];
                        a.erase(a.begin() + r);
                        p = 1;
                        break;
                    }
                }
                if (!p) for (int r = 0; r < q; r++) {
                    if (a[r].first != x.first && a[r].second != x.second && a[r].first + a[r].second != x.first + x.second && a[r].first - a[r].second != x.first - x.second) {
                        z.push_back(a[r]);
                        x = a[r];
                        a.erase(a.begin() + r);
                        p = 1;
                        break;
                    }
                }
                if (!p) {
                    y = 1;
                    break;
                }
            }
            if (!y) {
                for (pii i : z) cout << i.first + 1 << ' ' << i.second + 1 << '\n';
                break;
            }
        }
    }
}

