#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        long long int n,k,f,tot=0;
        cin>>n;
        cin>>k;
        cin>>f;
        for(int i=1;i<=n;i++)
        {
            long long st,en;
            cin>>st;
            cin>>en;
            tot+=en-st;
        }
        if(f-tot>=k)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
	return 0;
}
