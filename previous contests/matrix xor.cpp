#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        int n,m,k;
        cin>>n;
        cin>>m;
        cin>>k;
       int min=k+2;
       int max=k+n+m;
       int ans=0;
       vector<int> vec;
       for(int a=1;a<=n;a++)
       {
           for(int b=1;b<=m;b++)
           {
               int sum=k+a+b;
               if(std::find(vec.begin(), vec.end(), sum) == vec.end())
               {
                   vec.push_back(sum);
               }
               else
                {
                  remove(vec.begin(),vec.end(),sum);
                }
           }
       }
       for (auto it : vec)
       {
           // ans=ans^it;
           cout<<it<<endl;
       }
     cout<<ans;
    }
	return 0;
}
