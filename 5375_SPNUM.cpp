//* 784453	26/06/2023 10:25:36	Minh4893IT	SPNUM - TÌM SỐ ĐẶC BIỆT	GNU C++20	Accepted	15 ms	1116 KB

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

bitset<100000> isPrime;

int sieve(int n = 10000000000ll)
{
    isPrime.flip();
    
    isPrime.set(0, false);
    isPrime.set(1, false);

    n = sqrt(n);
    for (int i = 2; i * i <= n; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime.set(j, false);
    
    int count = 0;
    for (int i = 2; i <= n; ++i)
        count += isPrime[i];
    return count;
}

void solve()
{
    int n;
    cin >> n;

    cout << sieve(n);
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
