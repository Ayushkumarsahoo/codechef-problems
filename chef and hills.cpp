#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int avg=sum/n;
        int b=avg;
        int e=b+1;
        int c=0;
        for(int i=0;i<k;i++)
        {
            if(i%2==0)
                b--;
            else e++;
            c++;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=max(abs(arr[i]-b), abs(arr[i]-e));
        }
        cout<<ans<<endl;
    }
	return 0;
}
