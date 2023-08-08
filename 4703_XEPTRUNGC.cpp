//* 816353	08/08/2023 20:42:24	Minh4893IT	XEPTRUNGC - XẾP TRỨNG	GNU C++20	Accepted	718 ms	10420 KB

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

int n, m;
vector<int> arr;

bool check(int size)
{
    int count = 1;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (sum + arr[i] > size)
            sum = 0, ++count;
        sum += arr[i];
    }

    return count <= m;
}

void solve()
{
    cin >> n >> m;
    arr.resize(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int low = 0;
    int high = 1000000000005;
    int res;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (check(mid))
        {
            res = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    cout << res;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
