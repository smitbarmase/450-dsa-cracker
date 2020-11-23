// Write a program to reverse an array or string
// Recursive way

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

void reverse_array(int arr[], int l, int r)
{
  if (l >= r)
  {
    return;
  }
  swap(arr[l], arr[r]);
  reverse_array(arr, l + 1, r - 1);
}

void print_array(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int arr[] = {2, 3, 4, 5, 6, 7, 8};

  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original array: ";
  print_array(arr, n);

  reverse_array(arr, 0, n - 1);

  cout << "Revered array: ";
  print_array(arr, n);

  return 0;
}