#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
    {
        long long n,k;
        cin>>n;
        cin>>k;
        long long arr[n];
        long long day=0;
       // long long sum=0;
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
         //   sum+=arr[i];
        }
        long long i;
        for(i=0;i<n;i++)
        {
           if(arr[i]>=k)
           {
               day++;
               arr[i+1]+=(arr[i]-k);
           }
           if(arr[i]<k)
             {
                 day++;
             }
        }
        if(i==n)
        {
            day+=((arr[n-1])/k);
        }
           cout<<day<<endl;
           /* long long m=min(arr[i],k);
               arr[i]-=m;
               sum+=arr[i];
               day++;
               if(i!=n-1)
               {
                   arr[i+1]+=sum;
                   sum=0;
               }
               else
               {
                    while(sum>=0)
                   {
                       if(sum<k-1)
                       {
                           break;
                       }
                       else
                       {
                       sum-=k;
                        day++;
                       }
                   }
                    cout<<day<<endl;
               }
               */
        }


return 0;

    }

