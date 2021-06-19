#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int h,x,y,c;
        cin>>h;
        cin>>x;
        cin>>y;
        cin>>c;
        int ph= x+ floor(y/2);
        int tot=h*ph;
        if(tot<=c)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
	return 0;
}
