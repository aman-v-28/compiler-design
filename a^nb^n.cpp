#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int ca = 0, cb = 0;
    if (str.length() == 0)
    {
        cout << true << endl;
    }
    else if (str.length() % 2 == 0)
    {
        for (int i = 0; i < str.length() / 2; i++)
        {
            if (str[i] == 'a')
            {
                ca++;
            }
        }

        if (ca == str.length() / 2 && ca)
        {
            for (int i = str.length() / 2; i < str.length(); i++)
            {
                if (str[i] == 'b')
                {
                    cb++;
                }
            }
        }
        if (ca == cb && ca)
        {
            cout << true << endl;
        }
        else
        {
            cout << false << endl;
        }
    }
    return 0;
}
