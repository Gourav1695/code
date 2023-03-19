#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool flag = false;
        if (str.size() == 1)
        {
            // cout << "YES" << endl;
            flag=true;
            // return ;
        }
    
        for (int i = 0; i < str.size(); i++)
        {
            for(int j=i+1; j<str.size();j++){
            if (str[i] == str[j])
            {
                if ((j - i) % 2 == 0)
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
           
            else
            {
                flag = true;
            }
        }
         if(flag==false){
                break;
            }
           
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}