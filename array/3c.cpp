// Kth Smallest/Largest Element in Unsorted Array
// Expected Linear Time. Randomized Quick Select.
// O(n) in best case. O(n^2) in worst.

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

int partition(int arr[], int l, int r)
{
  int x = arr[r], i = l;
  for (int j = l; j <= r - 1; j++)
  {
    if (arr[j] <= x)
    {
      swap(arr[i], arr[j]);
      i++;
    }
  }
  swap(arr[i], arr[r]);
  return i;
}

int random_partition(int arr[], int l, int r)
{
  int n = r - l + 1;
  int pivot = rand() % n;
  swap(arr[l + pivot], arr[r]);
  return partition(arr, l, r);
}

int kth_smallest(int arr[], int l, int r, int k)
{
  if (k > 0 && k <= r - l + 1)
  {
    int pos = random_partition(arr, l, r);
    if (pos - l == k - 1)
      return arr[pos];
    if (pos - l > k - 1)
      return kth_smallest(arr, l, pos - 1, k);
    return kth_smallest(arr, pos + 1, r, k - pos + l - 1);
  }
  return INT_MAX;
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