// Kth Smallest/Largest Element in Unsorted Array
// By Sorting

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

int kth_smallest(int arr[], int n, int k)
{
  sort(arr, arr + n);
  return arr[k - 1];
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

  cout << kth_smallest(arr, n, k);

  return 0;
}