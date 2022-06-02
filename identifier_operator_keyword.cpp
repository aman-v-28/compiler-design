#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    getline(cin,str);

    int id = 0, op = 0, key = 0;

    int i = 0, k = 0;

    while (i < str.length())
    {
        k = i;
        while(!isspace(str[i]) && i < str.length()){
            i++;
        }

        string r  = str.substr(k, i-k);
        
        if(
            r.find("int") != string::npos ||
            r.find("float") != string::npos ||
            r.find("double") != string::npos ||
            r.find("char") != string::npos 
        ){
            key++;
        } else if( 
            r.find("+") != string::npos ||
            r.find("-") != string::npos ||
            r.find("*") != string::npos ||
            r.find("/") != string::npos ||
            r.find("%") != string::npos ||
            r.find("=") != string::npos ||
            r.find("==") != string::npos
        ) {
            op++;
        } else {
            id++;
        }
        i++;
    }
    

    cout<< endl << "Keywords : " << key << endl << "Identifiers : "<< id << endl << "Operators: "<< op<<endl;
    return 0;
}
