//* 810026	02/08/2023 17:29:35	Minh4893IT	TEOTI - Tèo và Tí	GNU C++20	Accepted	15 ms	2664 KB

#include <iostream>
#include <vector>
using namespace std;

#define IF(cond, t, f) (cond ? t : f)

int main(int argc, char *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());
	cout << arr[(n - 1) / 2];
}