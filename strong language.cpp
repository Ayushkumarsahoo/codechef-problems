#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n;
        cin>>k;
        string s;
        cin>>s;
        int max=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='*')
            {
                int c=0;
                while(s[j]=='*')
                {
                    c++;
                    j++;
                }
                if(c>max)
                    max=c;
            }
        }
        if(max>=k)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
	return 0;
}
