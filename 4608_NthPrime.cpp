//* 784913	27/06/2023 01:49:55	Minh4893IT	NthPrime - SỐ NGUYÊN TỐ THỨ N	GNU C++20	Accepted	234 ms	30396 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

bitset<100000001> isPrime;
vector<int> primeCount(2000001);

void sieve(int n = 2000000)
{
    isPrime.reset();
    isPrime.flip();

    isPrime.set(0, false);
    isPrime.set(1, false);

    for (int i = 2; i * i <= n; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime.set(j, false);

    for (int i = 2; i <= n; ++i)
        primeCount[i] = primeCount[i - 1] + isPrime[i];
}

void solve()
{
    int t;
    cin >> t;

    sieve();

    while (t--)
    {
        int n;
        cin >> n;

        int low = 2;
        int high = 2000000;
        int res;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (primeCount[mid] >= n)
            {
                high = mid - 1;
                res = mid;
            }
            else
                low = mid + 1;
        }

        cout << res << endl;
    }
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
