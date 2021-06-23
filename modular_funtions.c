#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    int vals[num];
    int i;
    for(i = 0; i < num; i++){
        scanf("%d", &vals[i]);
    }
    
    return 0;
}