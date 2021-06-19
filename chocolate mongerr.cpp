#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int x,n;
        cin>>n;
        cin>>x;
        vector<int> ch;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            ch.push_back(temp);

        }

         sort(ch.begin(), ch.end());
        int com=ch[0];
        for(int i=1;i<ch.size();i++)
        {

            if(com==ch[i])
            {
                x--;
                ch.erase(ch.begin() + i);
                i--;

            }
            else
            {
                com=ch[i];
            }
        }

        if(x<=0)
        {
            cout<<ch.size()<<endl;
        }
        else
        {
            cout<<ch.size()-x<<endl;
        }

    }
	return 0;
}

