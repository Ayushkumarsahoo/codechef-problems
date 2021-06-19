#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        ll a,b;
        cin>>a;
        cin>>b;
        ll c=0;
        if(a==1 && b==1)
         c=1;
        else
        {
         ll ea=a/2;
         ll oa=a-ea;
         ll eb=b/2;
         ll ob=b-eb;
         c=((ea*eb)+(oa*ob));
        }

        cout<<c<<endl;

    }
	return 0;
}
