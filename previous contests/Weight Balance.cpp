#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        int w1,w2,x1,x2,m;
        cin>>w1;
        cin>>w2;
        cin>>x1;
        cin>>x2;
        cin>>m;
        if(((w2-w1)>=x1*m) && ((w2-w1)<=x2*m))
        {
            cout<<1<<endl;
        }
        else cout<<0<<endl;
    }
	return 0;
}
