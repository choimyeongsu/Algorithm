#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

/*
74759336
36195974

7346715995393764
*/

int main()
{
    char anum[10], bnum[10], sumnum[20];

    for(int i=0; i<8; i++)
    {
        cin>>anum[i];
    }
    for(int i=0; i<8; i++)
    {
        cin>>bnum[i];
    }
    /*
    for(int i=0; i<8; i++)
    {
        cout<<anum[i];
    }
    */

    /*
    sumnum[0]=anum[0]
    sumnum[1]=bnum[0]
    sumnum[2]=anum[1]
    sumnum[3]=bnum[1]
    sumnum[4]=anum[2]
    sumnum[5]=bnum[2]
    ..
    sumnum[14]=anum[7]
    sumnum[15]=bnum[7]
    */
    int j=0;
    for(int i=0; i<16; i=i+2)
    {
        sumnum[i]=anum[j];
        sumnum[i+1]=bnum[j];
        j++;   
    }
    //for(int i=0; i<16; i++) cout<<sumnum[i];
    
    /*
    [0]+[1], [1]+[2], [2]+[3] ... [14]+[15]

    [0]+[1], ... , [13]+[14]
    ...
    [0]+[1], [1]+[2]
    */
    int ans=16, arr[16];
    for(int i=0; i<16; i++)
    {
        arr[i]=(sumnum[i]-48);
    }
    /*
    for(int i=0; i<16; i++)
    {
        cout<<arr[i]<<" ";
    }
    */

    while(1)
    {
        for(int i=0; i<ans; i++)
        {
            if(i==ans-1) break;
            arr[i]=(arr[i]+arr[i+1])%10;
            //cout<<arr[i]<<endl;
        }         
        ans=ans-1;
        
         
        
        
        if(ans==2) break;
    }
    for(int i=0; i<ans; i++)
    {
        cout<<arr[i];
    }     
    
    



    
    
    return 0;
}