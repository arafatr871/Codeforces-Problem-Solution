#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n, x;
    cin >> n;
    vector < int > a(2 * n);
    unordered_set < int > s;
    vector < int > b;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    for (auto p: a)
    {
        if (!s.count(p))
        {
            s.insert(p);
            b.push_back(p);
        }
    }
    for (auto l: b)
    {
        cout << l << " ";
    }
    cout << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int TT;
    cin >> TT;
    while (TT--) {
        solve();
    }
}
