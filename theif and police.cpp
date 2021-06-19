#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n,m;
        cin>>n;
        cin>>m;
        int x,y;
        cin>>x;
        cin>>y;
        int a,b;
        cin>>a;
        cin>>b;
        int tt=(n-x)+(m-y);
        int pt=0;
        while(a<n && b<m)
        {
            a++;
            b++;
            pt++;
        }
        pt+=(n-a)+(m-b);

        if(tt<=pt)
        {
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;
    }
	return 0;
}
