#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,flag=0,len=0;
    string s;
    cin>>s;
    len=s.length();
    for(i=1; s[i]!='\0'; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            flag++;
        }
        else;
    }
    ///  cout<<flag<<endl;
    if(flag==len-1)
    {
        for(i=1; s[i]!='\0'; i++)
        {
            s[i]+=32;
        }
        if(s[0]>=97 && s[0]<=122)
            s[0]-=32;
        else
            s[0]+=32;

    }
        cout<<s;

}
