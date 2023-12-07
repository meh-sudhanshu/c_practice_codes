

int main(){
    int n = 5678976;
    int ans = 0;
    int rem;
    int reversedNumber = 0;
    while (n != 0)
    { 
        rem = n % 10;
        reversedNumber = reversedNumber*10 + rem; 
        ans+=rem;
        n = n/10;
    }
    printf("%d",ans);
    
}