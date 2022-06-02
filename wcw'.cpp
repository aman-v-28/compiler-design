#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int flag = 0;
    stack<char> stack;

    if (str.length() % 2 == 0)
    {
        cout << "Rejected" << endl;
    }
    else
    {
        int i;
        for (i = 0; i < str.length() / 2; i++)
        {
            if(str[i] == 'a' || str[i] == 'b')
                stack.push(str[i]);
        }

        if(str[i] != 'c'){
            flag = 1;
        }

        for (int i = str.length() / 2 + 1; i < str.length(); i++)
        {
            if (stack.empty() || str[i] != stack.top() || flag)
            {
                flag = 1;
                break;
            }
            stack.pop();
        }

        if (flag)
        {
            cout << "Rejected" << endl;
        }
        else
        {
            cout << "Accepted" << endl;
        }
    }
    return 0;
}
