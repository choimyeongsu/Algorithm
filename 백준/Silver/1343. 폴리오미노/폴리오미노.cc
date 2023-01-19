#include <bits/stdc++.h>

using namespace std;
#define endl '\n'



int main()
{
    char board[51];
    cin>>board;

    //cout<<board[0]<<" "<<board[2]<<endl;   
    int len=strlen(board);
    //cout<<len<<endl;
    int cnt=0, xcnt=0;
    
    for(int i=0; i<len; i++)
    {
        if(board[i]=='.')
        {
            //x가 홀수이면 -1 출력 종료
            if(xcnt%2!=0)
            {
                cout<<"-1";
                return 0;
            }
            cnt=0;
        }
        else if(board[i]=='X')
        {
            xcnt++;
            cnt++;
        }
    }
    if(xcnt%2!=0)
    {
        cout<<"-1";
        return 0;
    }
    
    int acnt=0, bcnt=0;
    cnt=0;
    //cout<<" len : "<<len<<endl;
    for(int i=0; i<len; i++)
    {
        //cout<<" i : "<<i <<" cnt : "<<cnt<<endl;
        if(board[i]=='X')
        {
            cnt++;
            if(cnt==4)
            {
                cout<<"AAAA";
                acnt++;
                cnt=0;
            }
        }
        else if(board[i]=='.')
        {
            for(int j=0; j<cnt; j++)
            {
                cout<<"B";
            }     
            cnt=0;       
            cout<<".";           
        }
        if(i==len-1)
        {
            for(int j=0; j<cnt; j++)
            {
                cout<<"B";
            }
            
        }
    }
    


    return 0;
}