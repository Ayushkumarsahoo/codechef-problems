#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

bool eq(int a[],int b[],int n)
{
  for(int i=0;i<n;i++)
  {
      if(a[i]==b[i])
      {
          continue;
      }
      else
      {
          int c=0;
          for(int j=0;i<n;j++)
          {
             int g= gcd(a[i],a[j]);
              if(g== b[i])
              {
                  a[i]=g;
                  a[j]=g;
                  i=min(i,j);
                  break;
              }
          }
          if (c==0)
            return false;

      }

  }
   int p=0;
      for (int i= 0; i<n; i++)
      {
           if (a[i] == b[i])
                p++;

      }
      if(p==n)
        return true;
      else false;
}

int main() {
	 int t;
    cin>>t;
	for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n+1];
        int b[n+2];
        int num;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            b[i]=num;
            a[i]=i+1;
        }
        bool k=eq(a,b,n);
        if(k)
         cout<<"YES";
        else cout<<"NO";
    }
	return 0;
}
