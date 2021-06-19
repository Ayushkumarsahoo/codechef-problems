#include <iostream>
#include <vector>
using namespace std;

int power (int a)
{
    int sum=0,rem;
    while(a>0)
    {
        rem=a%10;
        sum+=rem;
        a=a/10;
    }
    return (sum);

}

int winner(vector<int> c)
{
    int cc=c[0];
    int mc=c[1];
    int cp= power(cc);
    int mp= power(mc);
    if(cp>mp)
      return (0);
    else if(mp>cp)
       return (1);
    else if (mp==cp)
        return (2);

}

int main() {
	int t;
	cin>>t;
	for(int i =0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    for(int j=0;j<n;j++)
	     {
	         int l;
	         int cf=0,mt=0;
	       vector<int> card ;
	       for(int l=0;l<2;l++)
	       {
	       cin>>l;
	       card.push_back(l);
	       }
	      int k=winner(card);
	       if(k==0)
               cf++;
           else if(k==1)
                mt++;
           else if(k==2)
           {
               cf++;
               mt++;
           }
           if(cf>mt)
           {
               cout<<"0 "<<cf<<endl;
           }
           else if(mt>cf)
           {
               cout<<"1 "<<mt<<endl;
           }
           else if(mt==cf)
           {
               cout<<"2 "<<mt<<endl;
           }
	     }
	}
	return 0;
}
