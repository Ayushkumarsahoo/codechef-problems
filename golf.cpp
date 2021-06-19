#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n,x,k;
        cin>>n;
        cin>>x;
        cin>>k;

        int flag=0;
           if(x%k==0 || (n+1-x)%k==0)
           {
               cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
    }
	return 0;
}
// 0 1 2 3 4 5 6

