#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;

    string s;
    int c=0;

    if(n==0)
    {
        s='0';
    }
    else
    {

    while(n>0)
    {
        if(n%2==0)
        {
            s+='0';
        }
        else
            s+='1';

        n/=2;
    }
    }
    reverse(s.begin(),s.end());

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
    }

    cout<<c<<endl;


}
