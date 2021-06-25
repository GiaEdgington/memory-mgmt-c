#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    int vals[num];
    int i;
    char unit;
    int convertion;
    for(i = 0; i < num; i++){
        scanf("%d", &vals[i]);
        int j=0;
        while(vals[i][j] != '\0'){
            j++;
        }
        unit = vals[i][j+1];

        if(unit == 'g'){
            //convertion = //
        }
    }
    
    return 0;
}