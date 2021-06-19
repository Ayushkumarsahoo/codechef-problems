#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int diff=abs(c-a)+abs(d-b);
        if(diff>k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(diff==k)
                cout<<"YES"<<endl;
            else
            {
                int d=k-diff;
                if(d%2==0)
                    cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
	return 0;
}
