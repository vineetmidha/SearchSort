
// https://mycode.prepbytes.com/problems/searching/FACESUN

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  
  while (t--)
  {
    int n;
    cin >> n;
    
    int maxi;
    int c = 0;
    
    for (int i=0; i<n; i++)
    {
      int x;
      cin >> x;
      
      if (i==0 || x > maxi)
      {
        maxi = x;
        c++;
      }
    }
    
    cout << c << endl;
  }
  
  return 0;
}

