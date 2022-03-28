#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    if(
        str.find("int") != string::npos ||
        str.find("float") != string::npos ||
        str.find("double") != string::npos ||
        str.find("char") != string::npos 
    ){
        cout<<"Present"<<endl;
    } else {
        cout<<"Not present"<<endl;
    }

    return 0;
}