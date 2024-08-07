#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n,i, k,count=0;
    int x=0;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (k == 0)
    {
        if (v[0] > 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else if (k == n)
    {
        cout << v[n-1] << endl;
    }
    else
    {
        x=v[k-1];
        for (i = 0; i < n; i++)
        {
            if (v[i] <= x)
            {
                count++;
            }
        }

        // Output the result based on the count
        if (count == k)
        {
            cout << x << endl;
        }
        else
        {
        cout << -1 << endl;
        }
        
    }

    return 0;
}
