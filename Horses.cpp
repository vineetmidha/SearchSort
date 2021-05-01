// https://www.codechef.com/SEP12/problems/HORSES

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        long long a[n];
        
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        sort(a,a+n);
        
        long long mini = a[n-1];
        
        for (int i=1; i<n; i++)
        {
            long long t = a[i]-a[i-1];
            if (t < mini)
                mini = t;
        }
        
        cout << mini << endl;
    }
	return 0;
}
