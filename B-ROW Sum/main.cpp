#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    
    int row,col,i,j,sum=0;
    cin>>row;
    cin>>col;
    vector<int>row_sum(row);

    for(i=0;i<row;i++)
    {   
        row_sum[i]=0;
        for(j=0;j<col;j++)
        {
            cin>>sum;
            row_sum[i]+=sum;
        }
    }

    for(i=0;i<row_sum.size();i++)
        cout<<row_sum[i]<<endl;

    return 0;
}