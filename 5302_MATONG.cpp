//* 826910	18/08/2023 21:27:27	Minh4893IT	MATONG - MẬT ONG - HSG 20.21	GNU C++20	Accepted	312 ms	10436 KB

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

vector<int> minPrime(1000005);

void preprocess()
{
    for (int i = 2; i * i <= 1000000; ++i)
        if (!minPrime[i])
            for (int j = i * i; j <= 1000000; j += i)
                if (!minPrime[j])
                    minPrime[j] = i;
    
    for (int i = 1; i <= 1000000; ++i)
        if (!minPrime[i])
            minPrime[i] = i;
}

int countDiv(int n)
{
    map<int, int> count;
    while (n != 1)
        ++count[minPrime[n]], n /= minPrime[n];

    int result = 1;
    for (auto elem : count)
        result *= elem.second + 1;
    return result;
}

void solve()
{
    int n;
    cin >> n;

    int result = 0;
    while (n--)
    {
        int val;
        cin >> val;
        result += val * countDiv(val);
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    preprocess();

    // MULTI
    solve();

    return 0;
}
