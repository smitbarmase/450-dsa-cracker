// Kth Smallest/Largest Element in Unsorted Array
// By Min-Heap
// Can also be implemented using Max-Heap with K elements.

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

int kth_smallest(int arr[], int n, int k)
{
  priority_queue<int, vector<int>, greater<int>> pq;
  make_heap(arr, arr + n);
  f(i, 0, n) pq.push(arr[i]); // N * logN
  f(i, 0, k - 1) pq.pop();    // k * 2logN
  return pq.top();
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

  cout << kth_smallest(arr, n, k);

  // O(NlogN + 2KlogN)

  return 0;
}