#include<iostream>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    if(s[0] == '_') ans++;
    if(s[n-1] == '_') ans++;
    if(n == 1 && s[0] == '^') ans++;

    for(int i = 1; i < n; i++)
    {
        if(s[i] == '_' && s[i] == s[i-1]) ans++;
    }

    cout << ans << "\n";


    return;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
