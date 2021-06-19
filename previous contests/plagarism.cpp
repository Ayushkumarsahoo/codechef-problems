#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n,m,k;
        cin>>n;
        cin>>m;
        cin>>k;
        int arr[k];
        int ans[n+m]={0};
        int dis=0;
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
            ans[arr[i]]++;
        }
        vector<int> vec;
        for(int i=0;i<=n;i++)
        {
            if(ans[i]>1)
            {
                dis++;
                vec.push_back(i);
            }

        }
        cout<<dis<<" ";
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec.at(i)<<" ";
        }

    }
	return 0;
}

