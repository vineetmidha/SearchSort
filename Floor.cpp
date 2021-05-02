// https://mycode.prepbytes.com/problems/searching/FLOOR

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
  int t;
  cin >> t;
  
  while (t--)
  {
    int  n, x;
    cin >> n >> x;
    
    int a[n];
    
    for (int i=0; i<n; i++)
    {
      cin >> a[i];
    }

    int ans = -1;
    
    for (int i=0; i<n; i++)
    {
      if (a[i] <= x)
      {
        ans = i;
        if (a[i] == x)
          break;
      }
    }

    cout << ans << endl;
  }
  return 0;
}

