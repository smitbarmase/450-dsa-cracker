// Find Union and Intersection of two unsorted arrays
// Using Hash Set - Distinct elements in each array

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
  unordered_set<int> s;
  f(i, 0, n) s.insert(arr_1[i]);
  f(i, 0, m) s.insert(arr_2[i]);
  for (auto ele : s)
  {
    cout << ele << " ";
  }
  // O(N + M) assuming, insertion takes O(1)
}

void intersection_array(int arr_1[], int n, int arr_2[], int m)
{
  unordered_set<int> s;
  f(i, 0, n) s.insert(arr_1[i]);
  f(i, 0, m) if (s.find(arr_2[i]) != s.end()) cout << arr_2[i] << " ";
  // O(N + M) assuming, insertion takes O(1) and find take O(1)
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