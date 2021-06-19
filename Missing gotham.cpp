#include <iostream>
using namespace std;

int main() {
	int n;
	int p[n];
	int q;
	cin>>n;
	for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
     cin>>q;
     while(q--)
     {

         int x;
         int k;
         cin>>x;
         cin>>k;
          x=x-1;
         int dist=x;
         int tot=0;
         while(k>0 && x<n )
         {

           if(p[x]>0)
           {
             if(p[x]<=k)
             {
              tot+=(x-dist)*p[x];
               k-=p[x];
              p[x]=0;
             }
             else
             {
              tot+=(x-dist)*k;
              p[x]-=k;
              k=0;
             }
             x++;

           }
           else x++;
         }
         cout<<tot<<endl;

     }
	return 0;
}

