#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        for(long long int j=0;j<s.size()-4;j++)
        {
            if (s[j] == 'p' && s[j + 1] == 'a' && s[j + 2] == 'r' && s[j + 3] == 't' && s[j + 4] == 'y')
            {
               s[j + 2] = 'w';
               s[j + 3] = 'r';
               s[j + 4] = 'i';
            }
        }
        cout<<s<<endl;
    }
	return 0;
}
