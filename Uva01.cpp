#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,b,e,a,s,t;
    while(cin>>b>>e){
        s=0;
        cout<<b<<" "<<e<<" ";
        if(b>e){
            t=b;
            b=e;
            e=t;
        }
        for(i=b;i<=e;i++){
            a=1;
            n=i;
            while(n>1){
                if(n%2!=0)
                    n=(3*n)+1;
                else
                    n=n/2;
                a++;
            }
            if(a>s){
                s=a;
            }
        }
        cout<<s;
        cout<<endl;
    }

    return 0;
}
