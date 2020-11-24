// Program to cyclically rotate an array by one.
// Kadane’s algorithm
// O(N)

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

int max_sum_contiguous_subarray(int arr[], int n)
{
  int max = 0, mega_max = 0;
  f(i, 0, n)
  {
    max += arr[i];
    if (mega_max < max)
      mega_max = max;
    if (max < 0)
      max = 0;
  }
  return mega_max;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Array: " << endl;
  print_array(arr, n);

  cout << "\nMax sum of contiguous_subarray: " << max_sum_contiguous_subarray(arr, n);
  return 0;
}