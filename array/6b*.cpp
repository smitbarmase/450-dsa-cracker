// Find Union and Intersection of two unsorted arrays
// Using Sorting and Searching.
// Sort one array. For every element of second array, search it in first array using binary search.
// Later, you know what to do.

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

void union_array(int arr_1[], int n, int arr_2[], int m)
{
}

void intersection_array(int arr_1[], int n, int arr_2[], int m)
{
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

  int arr_1[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr_1) / sizeof(int);

  int arr_2[] = {1, 9, 11, 14, 15, 6, 7};
  int m = sizeof(arr_2) / sizeof(int);

  cout << "Array 1: " << endl;
  print_array(arr_1, n);

  cout << "\nArray 2: " << endl;
  print_array(arr_2, m);

  cout << "\nUnion Array: " << endl;
  union_array(arr_1, n, arr_2, m);

  cout << "\nIntersection Array: " << endl;
  intersection_array(arr_1, n, arr_2, m);
  return 0;
}