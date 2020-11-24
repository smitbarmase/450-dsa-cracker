// Program to cyclically rotate an array by one.
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

void rotate(int arr[], int n)
{
  int temp = arr[n - 1];
  for (int i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
  arr[0] = temp;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Array: " << endl;
  print_array(arr, n);

  rotate(arr, n);

  cout << "Rotated Array: " << endl;
  print_array(arr, n);

  return 0;
}