#include <bits/stdc++.h>

using namespace std;
#define endl '\n'


int main()
{
    int n, arr[11], one=1,two=2;
    cin>>n;
    n=n*2;
    string str;
    cin>>str;
    //cout<<str[0]<<" "<<str[2]<<endl;
    /*
    0 1 2 3 4 5
    1 2 1 2 1 2
    */
   if(str[0]=='1')
    {
        if(str[1]!='2')
        {
            cout<<"No";
        }
        else
        {
            for(int i=2; i<n; i++)
            {
                //짝수번째 1 인경우
                if(i%2==0&&str[i]=='1')
                {
                    continue;
                }
                //짝수번째 2 인경우
                else if(i%2!=0&&str[i]=='2')
                {
                    continue;                    
                }
                else
                {
                     cout<<"No";
                     return 0;
                }
            }
            cout<<"Yes";
        }
    }
    else if(str[0]=='2')
    {
        if(str[1]!='1')
        {
            cout<<"No";
        }
        else
        {
            /*
            0 1 2 3 4 5 6 7
            2 1 2 1 2 1 2 1
            */
            for(int i=2; i<n; i++)
            {
                if(str[i]=='2'&&i%2==0)
                {
                    continue;
                }   
                else if(str[i]=='1'&&i%2!=0)
                {
                    continue;
                }   
                else
                {
                    cout<<"No";
                    return 0;
                }          
            }
            cout<<"Yes";
        }
    }


    
    
    return 0;
}