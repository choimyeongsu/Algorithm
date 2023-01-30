#include <iostream>

using namespace std;
#define endl '\n'


bool seat[501];
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);

    int k,cnt=0;
    cin>>k;
    while(k--)
    {
        int p,m;
        cin>>p>>m;
        for(int i=0; i<p; i++)
        {
            int temp;
            cin>>temp;
            if(seat[temp]==0)
            {
                //cout<<" if "<<endl;
                seat[temp]=1;
                
            }
            else cnt++;

        }
        cout<<cnt<<endl;
        for(int i=1; i<=m; i++)
        {
            seat[i]=0;
        }
        cnt=0;
    }

    return 0;
}
