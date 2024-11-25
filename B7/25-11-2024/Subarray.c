// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[5] = {2,6,2,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i <=n ; i++){
        int si = 0;
        int ei = i-1;
        while(ei < n){
            for(int k = si; k<=ei;k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
            si+=1;
            ei+=1;
        }
    }

    return 0;
}