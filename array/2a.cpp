// Maximum and minimum of an array using minimum number of comparisons
// Iterative way

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

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  int arr[n];
  f(i, 0, n) cin >> arr[i];
  int min, max;

  if (n == 1)
  {
    min = max = arr[0];
  }
  else if (n == 2)
  {
    if (arr[0] > arr[1])
    {
      min = arr[1];
      max = arr[0];
    }
    else
    {
      min = arr[0];
      max = arr[1];
    }
  }
  else
  {
    min = arr[0];
    max = arr[1];
    for (int i = 2; i < n; i++)
    {
      if (arr[i] < min)
      {
        min = arr[i];
      }
      else if (arr[i] > max)
      {
        max = arr[i];
      }
    }
  }

  cout << "min: " << min << endl;
  cout << "max: " << max << endl;

  return 0;
}