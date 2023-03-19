
#include <bits/stdc++.h>
#include <iostream>
#include <map>
// #define long long long long 
using namespace std;

int  main()
{
    long long sum = 0;
    map<char, long long> mapObject;
    long long i;

    for (i = 0; i < 26; i++)
    {
        mapObject.insert(pair<char, long long>('a' + i, i + 1));
    }
    string str;
    cin >> str;
    for (long long i = 0; i < str.size(); i++)
    {
        map<char, long long>::iterator p;
        p = mapObject.find(str[i]);
        sum = sum + (i + 1) * (p->second);
    }
    cout << sum << endl;

    return 0;
}
