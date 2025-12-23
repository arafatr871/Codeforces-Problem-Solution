#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n, x;
    cin >> n;
    int ng = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ng += (x == -1);
    }
    int ans = 0;
    while (ng>n/2|| ng%2==1)
    {
        ng--;
        ans++;
    }
    cout<<ans<<endl;
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
