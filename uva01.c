#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("%d",n);
    for(i=0;i<1000000;i++){
        if(n==1){
            break;

        }
        else{
            if(n%2!=0){
                n=(3*n)+1;
            }
            else{
                n=n/2;
            }
        }
    printf("%d ",n);
    }

    return 0;
}
