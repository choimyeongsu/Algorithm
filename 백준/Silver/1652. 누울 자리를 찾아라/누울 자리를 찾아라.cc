#include <bits/stdc++.h>

using namespace std;
#define endl '\n'



int main()
{
    int n,rowcnt=0,colcnt=0;
    cin>>n;
    char str[n+1][n+1];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>str[i][j];
        }
    }
    //가로
    for(int i=0; i<n; i++)
    {
        int cnt=0, xcnt=0;
        for(int j=0; j<n; j++)
        {
            if(str[i][j]=='X')
            {
                cnt=0;
                continue;
            }
            else if(str[i][j]=='.'&&str[i][j+1]=='.'&&cnt==0)
            {
                //cout<<" i: "<<i<<" j: "<<j <<endl;
                cnt++;
                rowcnt++;
                
                
            }
        }
    }
    
    //세로
    for(int i=0; i<n; i++)
    {
        int cnt=0, xcnt=0;
        for(int j=0; j<n; j++)
        {
            if(str[j][i]=='X')
            {
                cnt=0;
                continue;
            }
            if(str[j][i]=='.'&&str[j+1][i]=='.'&&cnt==0)
            {
                //cout<<" i: "<<i<<" j: "<<j <<endl;
                cnt++;
                colcnt++;
                
            }
        }
    }
    cout<<rowcnt<<" "<<colcnt;



    


    
    return 0;
}