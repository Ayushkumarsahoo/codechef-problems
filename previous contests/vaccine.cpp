#include <iostream>
using namespace std;

int main() {
	int d1,v1,d2,v2,p;
	cin>>d1;
	cin>>v1;
	cin>>d2;
	cin>>v2;
	cin>>p;
	int d=1;
	int c=0;
	d=min(d1,d2);
	do{
        if(d>=d1)
            c+=v1;
        if(d>=d2)
            c+=v2;
        d++;

	}while(c<p);
	cout<<d-1;
	return 0;
}
