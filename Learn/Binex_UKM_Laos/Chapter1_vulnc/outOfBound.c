#include <stdio.h>

int main(){
    int secret = 1337;
    int a[8] = {1,2,3,4,5,6,7,8};
    // for(int i = 0; i < 8; i++){
    //     printf("%d\n", a[i]);
    // }

    while(1){
        int index;
        scanf("%d", &index);
        printf("result: %d\n", a[index]);
    }
}




