// *   - 1 star
// ** - 2 star
// *** - 3 star
// ****
// *****

int main(){
    int n = 10;  
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}