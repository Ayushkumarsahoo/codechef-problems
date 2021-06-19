#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

long int powfun(long x, long e, long mod)
	  {
	    long r = 1;
	    x = x % mod;
	    if (x == 0)
	      return 0;
	    while (e> 0)
	    {
	      if ((e&1) != 0)
	        r = (r*x) % mod;
	      e= e>>1;
	      x=(x*x)%mod;
	    }
	    return r;
	  }

int main() {
    const long M = 1000000007;
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long int k=powfun(2,n-1,M);
        cout<<k<<endl;
    }
	return 0;
}
