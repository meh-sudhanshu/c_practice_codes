int main(){
    int n = 10;
    int space = 0, star = 2*n-1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++) printf(" ");
        for(int j=1;j<=star;j++) printf("*");
        printf("\n");
        space+=1;
        star-=2;
    }
}