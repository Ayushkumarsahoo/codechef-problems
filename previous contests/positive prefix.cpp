#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int j=1;j<=n;j++)
        {
         if(n%2==0)
         {
            arr[j]=j*pow(-1,j);
         }
         else arr[j]=j*pow(-1,j+1);
         cout<<arr[j]<<endl;
        }


	}
	return 0;
}
