#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int alpha[26];
char result[51];
int main()
{
    int n,m,max=-1,cnt=0,index=0,ans=0;;
    char dna[1001][51];
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>dna[i][j];
        }
    }
    /*
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<dna[i][j];
        }
        cout<<endl;
    }
    */
    
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<26; k++)
            {
                if(dna[j][i]==k+'A')
                {
                    //cout<<k<<" ";
                    
                    alpha[k]++;
                }
            }
            //cout<<j<<" ";
            //cout<<str[j]<<" ";
        }
        for(int q=0; q<26; q++)
        {
            //cout<<"alpha[q] :"<<alpha[q]<<" ";
            if(max<alpha[q])
            {
                max=alpha[q];
                index=q;

            }   
            //초기화 다음 열을 위한
            alpha[q]=0;         
        }
        //cout<<" index : " <<index<<" ";
        
        result[cnt++]='A'+index;
        //cout<<result[cnt-1]<<endl;
        
        //다음 열을 위한 max 초기화
        max=-1;
        
    }
    //새로운 문자열 구함
    cout<<result<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(dna[i][j]!=result[j])
            {
                ans++;
            }
        }
    }
    cout<<ans;
    

    return 0;
}