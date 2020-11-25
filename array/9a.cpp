// Minimize the maximum difference between the heights
// O(NlogN)

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

void print_array(int arr[], int n)
{
  f(i, 0, n) cout << arr[i] << " ";
}

int min_maximum_difference_between_heights(int arr[], int n, int k)
{
  sort(arr, arr + n);
  int ans = arr[n - 1] - arr[0];
  int low = arr[0] + k;
  int high = arr[n - 1] - k;
  if (low > high)
    swap(low, high);

  for (int i = 1; i < n - 1; i++)
  {
    int sub = arr[i] - k;
    int add = arr[i] + k;
    if (sub >= low || add <= high)
      continue;

    if (high - sub <= add - low)
      low = sub;
    else
      high = add;
  }

  return min(ans, high - low);
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int arr[] = {1, 10, 14, 14, 14, 15};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 6;
  cout << "Array: ";
  print_array(arr, n);
  cout << "\nMin Maximum diffrence between height is: " << min_maximum_difference_between_heights(arr, n, k) << endl;
  return 0;
}