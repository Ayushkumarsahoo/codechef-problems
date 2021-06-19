#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
     ll t;
     cin>>t;
     for(ll i=0;i<t;i++)
     {
         ll n,k,x,y;
         cin>>n;
         cin>>k;
         cin>>x;
         cin>>y;
         vector<int> r;
         int c=0;
         while(!std::count(r.begin(),r.end(),x))
         {
             r.push_back(x);
             x=(x+k)%n;
             if(x==y)
             {
                 cout<<"YES"<<endl;
                 c++;
                 break;

             }
         }
         if(c==0)
         {
             cout<<"NO"<<endl;
         }

     }
	return 0;
}
