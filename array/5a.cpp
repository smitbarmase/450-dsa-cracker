// Move all negative numbers to beginning and positive to end with constant extra space
// Order does not matter.

// Three pointer approach.  -ves, zeroes, +ves
// 3-way partitioning method or Dutch National Flag Algorithm
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

void rearrage_array(int arr[], int n)
{
  // 0 to low (-ve), low to mid (zeroes), mid to high (unknown), high to n (+ve)
  int low = 0, mid = 0, high = n - 1;
  while (mid <= high)
  {
    if (arr[mid] > 0)
    {
      swap(arr[high--], arr[mid]);
    }
    else if (arr[mid] == 0)
    {
      mid++;
    }
    else
    {
      swap(arr[low++], arr[mid++]);
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

  int arr[] = {-12, 0, 11, -13, -5, 6, 0, -7, 5, -3, 0, -6};
  int n = sizeof(arr) / sizeof(int);

  cout << "Original array: " << endl;
  print_array(arr, n);

  rearrage_array(arr, n);

  cout << "\nNew array: " << endl;
  print_array(arr, n);

  return 0;
}