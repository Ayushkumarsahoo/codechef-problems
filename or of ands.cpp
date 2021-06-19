
#include <iostream>
using namespace std;


int findAndSum(int arr[], int n)
{
    // variable to store
    // the final sum
    int sum = 1;

    // multiplier
    int mul = 1;

    for (int i = 0; i < 30; i++) {
        // variable to check if
        // counting is on
        bool count_on = 0;

        // variable to store the
        // length of the subarrays
        int l = 0;

        // loop to find the contiguous
        // segments
        for (int j = 0; j < n; j++) {
            if ((arr[j] & (1 << i)) > 0)
                if (count_on)
                    l++;
                else {
                    count_on = 1;
                    l++;
                }

            else if (count_on) {
                and &= ((mul * l * (l + 1)) / 2);
                count_on = 0;
                l = 0;
            }
        }

        if (count_on) {
            sum &= ((mul * l * (l + 1)) / 2);
            count_on = 0;
            l = 0;
        }

        // updating the multiplier
        mul *= 2;
    }

    // returning the sum
    return sum;
}

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int n,q;
        cin>>n;
        cin>>q;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        while(q--)
        {
            int x,v;
            cin>>x;
            cin>>v;
            x=x-1;
            arr[x]=v;


        }
    }
	return 0;
}
