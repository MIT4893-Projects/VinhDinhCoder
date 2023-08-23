//* 830798	23/08/2023 07:39:22	Minh4893IT	DPLAGA1 - LÁT GẠCH 1	GNU C++20	Accepted	46 ms	2604 KB

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

int n;
vector<int> fib1, fib2;

vector<int> operator+(vector<int> num1, vector<int> num2)
{
    vector<int> result;

    if (num1.size() > num2.size())
        swap(num1, num2);

    bool carry = false;
    for (int i = 0; i < num1.size(); ++i)
    {
        int sum = num1[i] + num2[i] + carry;
        result.push_back(sum % 10);
        carry = sum / 10;
    }
    for (int i = num1.size(); i < num2.size(); ++i)
    {
        int sum = num2[i] + carry;
        result.push_back(sum % 10);
        carry = sum / 10;
    }
    if (carry)
        result.push_back(1);
    
    return result;
}

ostream &operator<<(ostream &os, vector<int> bignum)
{
    for (auto it = bignum.rbegin(); it != bignum.rend(); ++it)
        cout << *it;
    return cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    fib1 = fib2 = {1};

    for (int i = 2; i <= n; ++i)
        swap(fib1, fib2), fib2 = fib1 + fib2;
    cout << fib2;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
