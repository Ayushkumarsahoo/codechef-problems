#include <iostream>
using namespace std;

int main() {
	int n,h,x;
	cin>>n;
	cin>>h;
	cin>>x;
	int dif=h-x;
	int c=0;
	for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>= dif)
        {
            c++;
        }
    }
    if(c>0)
        cout<<"YES";
    else cout<<"NO";

	return 0;
}

