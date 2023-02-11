#include <iostream>

using namespace std;

#define endl '\n';

//11+25 -> 최솟값 : 11+25=36 , 최댓값 : 11+26 = 37
//1430 + 4862 -> 최솟값 : 1430 + 4852=6282 , 최댓값 : 1430+4862=6292
int main()
{
    string a,b;
    cin>>a>>b;
    
    //최솟값
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='6')
        {
            a[i]='5';
        }
    }
    for(int i=0; i<b.length(); i++)
    {
        if(b[i]=='6')
        {
            b[i]='5';
        }
    }
    //cout<<a<<" "<<b<<endl;
    //최솟값 합
    int min=stoi(a)+stoi(b);
    
    //최댓값
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='5') 
        {
            a[i]='6';
        }
    }
    for(int i=0; i<b.length(); i++)
    {
        if(b[i]=='5')
        {
            b[i]='6';
        }
    }
    int max=stoi(a)+stoi(b);
    cout<<min<<" "<<max;


    
    return 0;
}