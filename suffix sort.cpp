#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            long long int k;
            cin>>k;
            arr[i]=k;
        }
        int c=0;
        int pos=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
               c++;
               if(c==1)
                pos=i+1;
            }
        }
        if(c==0)
        {
            cout<<"YES"<<endl;
            cout<<0<<endl;
        }
        else
        {
              int t=0;
                for(int i=pos;i<n-1;i++)
                {
                    if(arr[i+1]<arr[i])
                        t++;
                }
            if(arr[n-1]<=arr[0] && t==0)
            {
                cout<<"YES"<<endl;
                cout<<1<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
	return 0;
}
