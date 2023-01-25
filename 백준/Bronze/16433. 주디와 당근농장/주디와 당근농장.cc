#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int arr[100][100];
int main()
{
    int n,r,c,cnt=0;
    cin>>n>>r>>c;
    arr[r-1][c-1]=1;

    while(1)
    {

    
        //배열 (1,1) 부터시작 (n,n)까지  행,열 -> 0 제외 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                //cout<<" i: "<<i<<" j: "<<j;
                //cout<<" arr[i][j] : "<<arr[i][j];
                if(arr[i][j]==1)
                {
                    if(arr[i-1][j-1]==0&&i-1>=0&&i-1<=n&&j-1>=0&&j-1<=n)
                    {
                        cnt++;
                        arr[i-1][j-1]=1;
                        
                    }
                    if(arr[i-1][j+1]==0&&i-1>=0&&j+1<=n&&i-1>=0&&j+1<=n)
                    {
                        cnt++;
                        arr[i-1][j+1]=1;
                        
                    }
                    if(arr[i+1][j-1]==0&&i+1>=0&&j-1<=n&&i+1>=0&&j-1<=n)
                    {
                        cnt++;                        
                        arr[i+1][j-1]=1;
                        
                    }
                    if(arr[i+1][j+1]==0&&i+1>=0&&j+1<=n&&i+1>=0&&j+1<=n)
                    {
                        cnt++;
                        arr[i+1][j+1]=1;
                        
                    }
                    

                }
                
            }
            
        }
        //당근을 심지않으면 cnt=0이므로 whiel 문 break
        if(cnt==0) break;
        //하나라도 당근을 심었다면 cnt는 다시 0으로 초기화
        else cnt=0;
        
        
    }
    //cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            //cout<<" i:"<<i<<" j:"<<j<<" ";
            //cout<<arr[i][j];
            if(arr[i][j]==1)
            {
                cout<<'v';
            }
            else cout<<'.';
        }
        cout<<endl;
    }
    
    

    return 0;
}