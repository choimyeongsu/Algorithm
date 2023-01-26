#include <bits/stdc++.h>

using namespace std;
#define endl '\n'


int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+5);
    //for(int i=0; i<5; i++) cout<<arr[i];

    int min=arr[0];
    int i=0,j=min,cnt=0;
    while(1)
    {
        if(j%arr[i]==0)
        {
            cnt++;
            if(cnt==3)
            {
                cout<<j;
                break;
            }
        }
        if(i==4)
        {
            j++;
            i=0;
            cnt=0;
        }
        else i++;
    }

    
    

    return 0;
}