#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int x,m,d;
        cin>>x;
        cin>>m;
        cin>>d;
        if(x*m>=x+d)
        {
            cout<<x+d<<endl;
        }
        else
            cout<<x*m<<endl;
    }
	return 0;
}

