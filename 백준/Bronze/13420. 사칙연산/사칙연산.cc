#include <iostream>

using namespace std;

#define endl '\n';

int main()
{
    long long testcase;
    cin>>testcase;
    while(testcase--)
    {
        long long a,b,c;
        char x,y;
        cin>>a>>x>>b>>y>>c;

        //cout<<a<<x<<b<<y<<c;
        if(x=='*')
        {
            a=a*b;
            if(a==c)
            {
                cout<<"correct"<<endl;
            }
            else cout<<"wrong answer"<<endl;
        }
        else if(x=='+')
        {
            a=a+b;
            if(a==c)
            {
                cout<<"correct"<<endl;
            }
            else cout<<"wrong answer"<<endl;
        }
        else if(x=='-')
        {
            a=a-b;
            if(a==c)
            {
                cout<<"correct"<<endl;
            }
            else cout<<"wrong answer"<<endl;
        }
        else if(x=='/')
        {
            a=a/b;
            if(a==c)
            {
                cout<<"correct"<<endl;
            }
            else cout<<"wrong answer"<<endl;
        }
    }
    return 0;
}