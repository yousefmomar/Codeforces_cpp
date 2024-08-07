#include<iostream>
#include<set>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{   
    int row,col,i,j;
    char c;
    cin>>row>>col;
    cin>>c;

    vector< vector<char> >v(row, vector<char>(col));
    set<char>s;
    


    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            cin>>v[i][j];
        }
        
    }

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if(v[i][j]==c)
            {
                if((j+1)<col)
                    if(v[i][j+1]!=c )
                    {
                        s.insert(v[i][j+1]);
                    }
                if((j-1)<col && (j-1)>=0)
                    if(v[i][j-1]!=c )
                    {
                        s.insert(v[i][j-1]);
                    }
                if((i+1)<row)
                    if(v[i+1][j]!=c )
                    {
                        s.insert(v[i+1][j]);
                    }
                if((i-1)<row && (i-1)>=0)
                    if(v[i-1][j]!=c)
                    {
                        s.insert(v[i-1][j]);
                    }
            }   
        }
        
    }

    s.erase('.');

    bool flag=s.empty();

    if(flag)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<s.size()<<endl;
    }
    return 0;
}