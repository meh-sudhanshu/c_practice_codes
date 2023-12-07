int main(){
    int n = 19;
    int a = 0, b= 1;
    int ans = 1;
    int next = 0;
    if(n <= 0){
        int x = printf("invalid input");
        printf("%d",x);
    }else if(n == 1){
        printf("%d",0);
    }else if(n == 2){
        printf("%d",1);
    }else{
        for(int i =3; i<=n;i++){
            next = a+b;
            ans+=next;
            a = b;
            b= next;
        }
    }
    printf("%d",ans);
    return 0;
}