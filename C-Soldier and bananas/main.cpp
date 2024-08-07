#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int money,n_bananas,price,total=0,borrow=0;
    cin>> price>>money>>n_bananas;

    for(int i=1;i<=n_bananas;i++)
    {
        total=total+(i*price);
    }

    if(total>money)
    {
        borrow=total-money;
    }
    cout<<borrow;



    return 0;
}