#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

bool desc(int a,int b)
{
    return a>b;
}
int main()
{
    int n,k,score[1001];
    cin>>n>>k;
    
    for(int i=0; i<n; i++)
    {
        cin>>score[i];
    }

    sort(score,score+n,desc);

    cout<<score[k-1];


    return 0;
}