#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main (void)
{
    int n;
   string str;
   
   cin>>n;
   cin>>str;

    string str2=str;

    auto it=str2.begin();
    it+=n;

    reverse(str2.begin(),it);
    if(str2==str)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;   

  
    return 0;
}