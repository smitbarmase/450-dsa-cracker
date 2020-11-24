// Sort an array of 0s, 1s and 2s without sorting algorithm.
// Counting method

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

void sort_array(int arr[], int n)
{
  int count_0 = 0;
  int count_1 = 0;

  f(i, 0, n)
  {
    if (arr[i] == 0)
      count_0++;
    else if (arr[i] == 1)
      count_1++;
  }

  f(i, 0, n)
  {
    if (count_0)
    {
      arr[i] = 0;
      count_0--;
    }
    else if (count_1)
    {
      arr[i] = 1;
      count_1--;
    }
    else
    {
      arr[i] = 2;
    }
  }
}

void print_array(int arr[], int n)
{
  f(i, 0, n) cout << arr[i] << " ";
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
  int n = sizeof(arr) / sizeof(int);

  cout << "Original array: " << endl;
  print_array(arr, n);

  sort_array(arr, n);

  cout << "\nSorted array: " << endl;
  print_array(arr, n);

  return 0;
}