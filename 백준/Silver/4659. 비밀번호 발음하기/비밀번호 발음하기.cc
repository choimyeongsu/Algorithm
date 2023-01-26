#include <bits/stdc++.h>

using namespace std;
#define endl '\n'


string password;
int check=0;
void print()
{
    cout<<"<"<<password<<">"<<" is not acceptable."<<endl;
    //check=1;
}

int main()
{
    
    while(1)
    {
        int cnt=0,ans=0,jaeum=0;
        check=0;
        cin>>password;
        if(password=="end") break;
        int len=password.length();
        for(int i=0; i<len; i++)
        {
            if(password[i]=='a')
            {
                cnt++;   
                ans++;
                jaeum=0;
                if(ans==3) check=1;    
            }
            else if(password[i]=='e')
            {
                cnt++;
                ans++;
                jaeum=0;
                if(ans==3) check=1;
            }
            else if(password[i]=='i')
            {
                cnt++;       
                ans++; 
                jaeum=0;
                if(ans==3) check=1;        
            }
            else if(password[i]=='o')
            {
                cnt++;
                ans++;
                jaeum=0;
                if(ans==3) check=1;  
            }
            else if(password[i]=='u')
            {
                cnt++;
                ans++;
                jaeum=0;
                if(ans==3) check=1;  
            }
            else
            {
                ans=0;
                jaeum++;
                if(jaeum==3)
                {
                    check=1;
                }
            }
        }
        if(cnt==0)
        {
            print();
            continue;
        }
        else if(check==1)
        {
            print();
            continue;
        }
        
        //마지막 조건
        int before=-1;
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<26; j++)
            {
                if(password[i]=='a'+j)
                {
                    if(before==j)
                    {
                        if(before!=4&&before!=14)
                        {
                            //cout<<" before : "<<before<<" j : "<<j;
                            check=1;
                        }
                    }
                    before=j;
                }
            }
        }
        if(check==0)
        {
            cout<<"<"<<password<<">"<<" is acceptable."<<endl;
        }
        else if(check==1)
        {
            print();
            continue;
        }
        
    }
    

    return 0;
}