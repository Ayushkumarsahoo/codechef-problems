
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int bar[n];
        int gar[n];
        for(int i=0;i<n;i++)
        {
            cin>>bar[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>gar[i];
        }

        sort(bar, bar + n);
        sort(gar, gar + n, greater<int>());
        int res[n];
        for(int i=0;i<n;i++)
        {
            res[i]=bar[i]+gar[i];
        }
        int max=res[0];

         for (int i = 0; i < n; i++)
         {
           if (res[i] > max)
            max = res[i];
         }
         cout<<max<<endl;

    }
	return 0;
}
