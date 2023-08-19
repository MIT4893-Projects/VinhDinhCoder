//* 827467	19/08/2023 13:16:05	Minh4893IT	CATTHEP - CẮT THÉP - HSG 22-23	GNU C++20	Accepted	625 ms	6452 KB

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

int n, k;
vector<int> arr;

bool check(int size)
{
    int count = 0;
    for (auto elem : arr)
        count += elem / size;
    return count >= k;
}

void solve()
{
    cin >> n >> k;
    arr.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int low = 1;
    int high = 1000000000;
    int result = 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(mid))
        {
            result = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
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
