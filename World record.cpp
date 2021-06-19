#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        float k1,k2,k3,v;
        cin>>k1;
        cin>>k2;
        cin>>k3;
        cin>>v;
        float cs=k1*k2*k3*v;
        float ct= 100/cs;
        double rounded = std::floor((ct * 100) + .5) / 100;
        if(rounded<9.58)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
