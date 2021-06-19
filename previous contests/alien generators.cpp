#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int a=1;a<=t;a++)
    {
      long long int g;
      cin>>g;
      int c=0;
      for(int k=1;k<=g;k++)
      {
          long long int sum=0;
          int i=0;
          while(sum<=g)
          {
              sum+=k+i;
               if(sum==g)
               {
                  c++;
                  break;
               }
              i++;
          }
      }
      cout<<"Case #"<<a<<": "<<c<<endl;

    }
	return 0;
}

