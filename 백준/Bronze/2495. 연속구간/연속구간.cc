#include <iostream>

using namespace std;

#define endl '\n';

int main()
{
    int testcase=3;
    while(testcase--)
    {
        string str;
        char before='a';
        int cnt=0,max=-1;
        cin>>str;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]==before)
            {
                //cout<<" i : "<<i;
                //cout<<" str[i] : "<<str[i]<<" before : "<<before<<endl;
                cnt++;
                {
                    if(cnt>max) max=cnt;
                }
            }
            else
            {
                before=str[i];
                cnt=0;
            }
        }
        if(max==-1)
        {
            cout<<1<<endl;
        }
        else cout<<max+1<<endl;
    }
    return 0;
}