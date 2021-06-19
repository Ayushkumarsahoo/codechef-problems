#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int x,a,b;
        cin>>x;
        cin>>a;
        cin>>b;
        cout<<(a+(100-x)*b)*10<<endl;
    }
	return 0;
}
