#include <iostream>
#include <vector>
using namespace std;

void overperbow(int n,int k,int l)
 {
     int ar[k+2]={0};
     vector<int> r;
     if(k*l<n)
     {
         cout<<(-1);
     }
     else
     {
         if(n>k)
         {
        for(int i=1;i<=k;i++)
        {
            r.push_back(i);
            ar[i+1]= ar[i+1]+1;
        }
        for(int i=k+1;i<=n;i++)
        {
            for(int j=1;j<=k;i++)
            {
                if(r[i-2]!=j && ar[j]<=l)
                 {
                     r.push_back(j);
                     ar[j]+=1;
                     break;
                 }
            }
        }
        for(int i=0;i<r.size();i++)
        {
         cout<<r[i]<<" ";
        }
       }
     else{
         for(int i=1;i<=k;i++)
        {
            r.push_back(i);
            ar[i+1]= ar[i+1]+1;
        }
        for(int i=0;i<r.size();i++)
         {
         cout<<r[i]<<" ";
         }

     }
   }


 }


int main() {
	int t,n,k,l;
	cin>>t;
	for(int i=0;i<t;i++)
	{
    cin>>n;
    cin>>k;
	cin>>l;
    overperbow(n,k,l);
	}
	return 0;
}
