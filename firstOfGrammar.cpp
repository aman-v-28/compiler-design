#include<bits/stdc++.h>

using namespace std;

string first(string s, map<char, string> mp){
    string w = "";

    vector<string> subproductions;
    stringstream ss(s);
 
    while (ss.good()) {
        string substr;
        getline(ss, substr, '|');
        subproductions.push_back(substr);
    }

    for (int i = 0; i < subproductions.size(); i++)
    {
        if(islower(subproductions[i][0])){
            if(w.empty()){
                w = subproductions[i][0];
            } else {
                w = w + "," + subproductions[i][0];
            }
        } else {
            for (int j = 0; j < subproductions[i].size(); j++)
            {
                if(islower(subproductions[i][j])){
                    if(w.empty()){
                        w = subproductions[i][j];
                    } else {
                        w = w + "," + subproductions[i][j];
                    }
                }
                else if(mp.find(subproductions[i][j]) != mp.end()){
                    if(w.empty()){
                        w = mp[subproductions[i][j]];
                    } else {
                        w = w + "," + mp[subproductions[i][j]];
                    }
                }
                if(w.find('e') == string::npos){
                    break;
                }
                if(w.find('e') != string::npos && j+1 < subproductions[i].size()){
                    w.erase(w.find('e') - 1, w.find('e'));
                }
            }
            
        }
    }
    return w;    
}

int main()
{
    vector<string> productions{
        "S->AB",
        "A->bA|a",
        "B->bB|d|c"
    };

    map<char, string> mp;

    for (int i = productions.size() - 1; i >= 0; i--)
    {
        mp[productions[i][0]] = first(productions[i].substr(3,productions[i].length()), mp);
    }

    for (auto x : mp)
      cout << x.first << " = " << x.second << endl;
    
    return 0;
}