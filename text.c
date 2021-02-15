#include<stdio.h>
int factoriel(int vorodi);
int main()
{   
    int vorodi;
    scanf("%d", &vorodi);
    printf("%d",factoriel(vorodi));
    return 0;
}
int factoriel(int vorodi){
    if (vorodi==1){
        return 1;
    }else{
        return vorodi*factoriel(vorodi-1);
    }
}