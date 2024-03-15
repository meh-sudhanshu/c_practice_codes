#include <stdio.h>
int main(){
    int arr[8] = {2,5,12,54,67,87,34,56};
    int[4][2] queries = {{1,5},{0,7},{2,6},{1,5}};
    int ps[8];
    for(int i=0;i<8;i++){
        if(i == 0) ps[i] = arr[i];
        else ps[i] = ps[i-1]+arr[i];
    }
    for(int i =0;i<4;i++){
        int si = queries[i][0];
        int ei = queries[i][1];
        if(si == 0){
            printf("%d ",ps[ei]);
        }else{
            printf("%d ",ps[ei]-ps[si-1]);
        }
    }
}