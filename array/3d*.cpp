// Kth Smallest/Largest Element in Unsorted Array
// Quick Select with centering thingy. Complete this.

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for (int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b)
{
  if (!b)
    return a;
  return gcd(b, a % b);
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int kth_smallest(int arr[], int l, int r, int k)
{
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;
  int arr[n];
  f(i, 0, n) cin >> arr[i];

  cout << kth_smallest(arr, 0, n - 1, k);

  return 0;
}