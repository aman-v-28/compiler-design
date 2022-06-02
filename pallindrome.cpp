#include <bits/stdc++.h>
using namespace std;
bool find(string s)
{
    int n=s.size();
    int j=n-1;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[j])
        return false;
        j--;
    }
    return true;
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<find(s);
}
