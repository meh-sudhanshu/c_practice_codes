#include<stdio.h>
int main(){ 
    int n = 10;
    int a = 0, b = 1;
    int ans = a+b;
    int next = 0;
    if(n <= 0)printf("invalid input");
    else if(n == 1) printf("0");
    else if(n == 2) printf("1");
    else{
        for(int i =3 ; i<=n; i++){
            next = a+b;
            ans+=next;
            a  = b;
            b = next;
        }
    }

    printf("%d",ans);
}