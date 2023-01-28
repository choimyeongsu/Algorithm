#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int score=0, bonus=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='X')
        {
            bonus=0;
        }        
        else if(str[i]=='O')
        {
            score=score+i;
            bonus++;
            score=score+bonus;
        }
    }
    cout<<score;
    return 0;
}