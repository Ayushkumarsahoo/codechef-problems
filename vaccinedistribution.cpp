#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
     ll n,d;
     cin>>n;
     cin>>d;
     int arr[n];
     double rs=0,ns=0;
     for(int j=0;j<n;j++)
     {
        cin>>arr[j];
        if(arr[j]>=80 || arr[j]<=9)
            rs++;
        else ns++;
     }
     int days=0;
     days=((ceil(rs/d))+ (ceil(ns/d)));
     cout<<days<<endl;
    }
	return 0;
}
