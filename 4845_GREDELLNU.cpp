//* 818423	10/08/2023 18:39:53	Minh4893IT	GREDELLNU - XOÁ SỐ	GNU C++20	Accepted	125 ms	4472 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n;
    cin >> n;

    vector<int> odd, even;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        if (val % 2)
            odd.push_back(val);
        else
            even.push_back(val);
    }

    if (even.size() > odd.size())
        even.swap(odd);
    
    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>());
    
    int result = 0;
    while (odd.size() > even.size() + 1)
        result += odd.back(), odd.pop_back();
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
