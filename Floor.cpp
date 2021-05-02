// https://mycode.prepbytes.com/problems/searching/KLMON

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n, m;
  cin >> n >> m;
  
  int a[n];
  
  int mini;
  
  for (int i=0; i<n; i++)
  {
    cin >> a[i];
    if (i==0 or a[i] < mini)
      mini = a[i];
  }
  
  int maxTime = ceil(m/mini);
  
  int c = 0;
  
  for (int i=0; i<n; i++)
  {
    c += maxTime / a[i];
  }
  
  cout << c << endl;
  
  return 0;
}

Hashing
