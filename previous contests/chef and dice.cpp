
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        int f2=11;
        int f3=15;
        int f4=18;
        int f5=20;
        if(n>4)
        {
            long long int q=n/4;
            long long int rem=n%4;
            long long int res=q*f2*4;
            if(rem==0)
            {
                res+= 4*4;
            }
            if(rem==1)
            {
                res+= (1*f5 + 3*4);
            }
            else if(rem==2)
            {
                res+= (2*f4 + 2*4);
            }
            else if(rem==3)
            {
                res+=(1*f3 + 2*f4 + 1*4);
            }
            cout<<res<<endl;
        }
        else if(n==1)
            cout<<f5<<endl;
        else if(n==2)
            cout<<2*f4<<endl;
        else if(n==3)
            cout<<f3+2*f4<<endl;
        else if(n==4)
            cout<<4*f3<<endl;
    }
	return 0;
}

