//* 827602	19/08/2023 15:42:09	Minh4893IT	GHEPSOI - GHÉP SỎI - HSG 19.20	GNU C++20	Accepted	296 ms	4412 KB

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

    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int result = 0;
    while (pq.size() > 1)
    {
        int temp = pq.top();
        pq.pop();
        int temp1 = temp + pq.top();
        pq.pop();

        result += temp1;
        pq.push(temp1);
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
