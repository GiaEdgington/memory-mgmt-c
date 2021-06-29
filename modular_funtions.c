#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    double vals[num];
    int i;
    char unit;
    double feet = 3.2808;
    int length;
    for(i = 0; i < num; i++){
        scanf("%lf", &vals[i]);
        int j=0;
        while(vals[i][j] != '\0'){
            j++;
        }
        length = length[j]+1;
        unit = vals[i][j+1];
        
        if(unit =='m'){
            printf('%.6lf', )
        }
    }
    
    return 0;
}