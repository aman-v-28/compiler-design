#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> productions{
        "S->AB",
        "A->gA|a",
        "B->bB|d|c"
    };

    set<char> nonTerminal, terminal;
    nonTerminal.insert(productions[0][0]);
    for (size_t i = 0; i < productions.size(); i++)
    {
        for (size_t j = 3; j < productions[i].length(); j++)
        {
            if(productions[i][j] == '|'){
                continue;
            } else if(isalpha(productions[i][j]) && isupper(productions[i][j])){
                nonTerminal.insert(productions[i][j]);
            } else {
                terminal.insert(productions[i][j]);
            }
        } 
    }

    cout<<"Terminals: ";
    for(auto i: terminal)
        cout<<i<<" ";

    cout<<endl<<"Non Terminals: ";
    for(auto i: nonTerminal)
        cout<<i<<" ";

    return 0;
}