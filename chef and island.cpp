#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int x,y,xr,yr,d;
        cin>>x;
        cin>>y;
        cin>>xr;
        cin>>yr;
        cin>>d;
        int comp=min((x/xr),(y/yr));
        if(comp>=d)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

	}
	return 0;
}
