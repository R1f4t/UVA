#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main()
{
    int t;
    double l,w,r;
    cin>>t;
    while(t--){
        r=0;
        cin>>l;
        w=(6*l)/10;
        r=l/5;
        printf("%.2lf %.2lf\n",(PI*r*r),((l*w)-(PI*r*r)));
    }

    return 0;
}
