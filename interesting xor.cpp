
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        int c;
        cin>>c;
        int d;
        d=ceil(log2(c));
        int num=pow(2,d);
        int max=0;
        for(int a=num-1;a>=0;a--)
        {
            for(int b=num-1;b>=0;b--)
            {
                if((a^b)==c)
                {
                    if(max<a*b)
                        max=a*b;
                }
            }
        }
        cout<<max<<endl;
    }
	return 0;
}

