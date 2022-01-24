#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i <= m;i++)
	{
		int max =a[m],min = a[0];
		int answer = max - min;
		return answer;
	}
	return 0;
}
