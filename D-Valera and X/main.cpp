#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    vector< vector<char> > v(n,vector<char>(n));

    bool flag=false;

    for(i=0; i<n;i++)
    {
        for (j = 0; j<n; j++)
        {
            cin>>v[i][j];
        }
        
    }
    int x=v[0][0];
    int rest=v[0][1];
    
    for(i=0; i<n;i++)
    {   
        if(x!=v[i][i] || x!=v[i][n-1-i] || rest==v[i][i] || rest==v[i][n-1-i])
        {
            flag=true;
            break;
        }
        for (j = 0; j<n; j++)
        {
            if(i!=j && i!=(n-1-j))
            {
                if(v[i][j]!=rest){
                    flag=true;
                    break;
                }
                    
            }
        }
    }
    if(flag==true)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;

}