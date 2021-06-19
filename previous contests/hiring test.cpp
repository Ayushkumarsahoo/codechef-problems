#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n,m;
        cin>>n;
        cin>>m;
        int x,y;
        cin>>x;
        cin>>y;
        while(n--)
        {
            int f=0,p=0;
            string str;
            cin>>str;
            for(int i=0;i<m;i++)
            {
                if(str[i]=='F')
                  f++;
                else if(str[i]=='P')
                    p++;

            }

            if(f>=x)
                cout<<"1";
            else if(f==(x-1) && p>=y)
                cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    }
	return 0;
}

