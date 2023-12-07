    //     *
    //    ***
    //   *****
    //  *******
    // *********  
int main(){
    int n = 10;
    int space = n-1, star = 1;
    for(int i = 1; i<=n;i++){
        for(int j=1;i<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("/n");space = space-1; star = star+2;
    }
}  