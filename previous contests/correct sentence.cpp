#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int k;
        cin>>k;
        std::string str[k];
        for (int i = 0; i < k; i++)
        {
           cin>>str[i];
        }
        int ans=0;
        for(int i=0;i<k;i++)
        {
            int c=str[i].at(0);
            int cp;
            if(c>=97 && c<=109)
            {
                cp=1;
            }
            else if(c>=78 && c<=90)
            {
                cp=2;
            }
            else ans++;
            if(cp==1)
            {
            for(int j=1;j<str[i].length();j++)
            {
                int c=str[i].at(j);
                if(c>=97 && c<=109)
                {
                    ans+=0;
                }
                else ans+=1;
            }
            }
            if(cp==2)
            {
                for(int j=1;j<str[i].length();j++)
            {
                int c=str[i].at(j);
                if(c>=78 && c<=90)
                {
                    ans+=0;
                }
                else ans+=1;
            }
            }

        }
        if(ans==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
	return 0;
}

