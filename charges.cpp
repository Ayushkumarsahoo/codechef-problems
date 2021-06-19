#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n,k;
        cin>>n>>k;
        int krr[k];
        string str;
        cin>>str;
        int sum=0;
        for(int i=1;i<n;i++)
        {
            if(str[i]==str[i-1])
            {
                sum+=2;
            }
            else sum++;
        }
        for(int i=0;i<k;i++)
        {
            cin>>krr[i];
        }
        for(int i=0;i<n;i++)
        {
        if(str[krr[i]-1]=='0')
             str[krr[i]-1]='1';
            else str[krr[i]-1]='0';
        /*for(int j=1;j<n;j++)
        {
            if(str[j]==str[j-1])
                sum+=2;
              else sum++;
        }*/
        if(krr[i]-1>0)
        {
         if(str[krr[i]-1]==str[krr[i]-2])
         {
             sum++;
         }
         else sum--;
        }
        if(krr[i]-1<n-1)
        {
        if(str[krr[i]-1]==str[krr[i]])
        {
         sum++;
        }
        else sum--;
        }
            cout<<sum<<endl;
        }
    }
	return 0;
}
