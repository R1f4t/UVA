#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int H,O;
    while(cin>>H>>O){
        if(H<O){
            cout<<O-H<<endl;
        }
        else{
            cout<<H-O<<endl;
        }
    }

    return 0;
}
