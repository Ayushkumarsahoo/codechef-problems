#include <iostream>
#include<vector>
using namespace std;


bool happy(vector<int> r)
{
    int c=0;
    int sum=0;
    for(int i=0;i<r.size();i++)
    {
        if((r[i]>=0 && r[i]%(i+1)==0) || r[i]==0)
            c++;
        sum+=r[i];
    }
    if(c==r.size() || sum==0)
        return true;
    else return false;
}

int main() {
    int t;
    cin>>t;
	for(int i=0;i<t;i++)
    {
        vector<int> r;
        int n;
        cin>>n;
        int num;
        for(int j=0;j<n;j++)
        {
            cin>>num;
            r.push_back(num);
        }
        bool k=happy(r);
        if(k)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

	return 0;
}
