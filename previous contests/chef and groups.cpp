#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int c=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='1')
            {
                int k;
                c++;
                k=j+1;
                while(s[k]!= '0' && k<s.length())
                {
                    k++;
                }
                j=k;
            }
        }
        cout<<c<<endl;
    }
	return 0;
}

