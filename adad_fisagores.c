#include<stdio.h>
int fisagores(int zele_yek,int zele_dovom,int zele_sevem);
int doblepoint(int a,int b,int c);
int main()
{   
    int zele_yek;
    int zele_dovom;
    int zele_sevem;
    scanf("%d", &zele_yek);
    scanf("%d", &zele_dovom);
    scanf("%d", &zele_sevem); 
    printf("%s",fisagores(zele_yek,zele_dovom,zele_sevem)?"YES":"NO");
    return 0;
}
int fisagores(int zele_yek,int zele_dovom,int zele_sevem){
      if(doblepoint(zele_yek,zele_dovom,zele_sevem)==1|
      doblepoint(zele_dovom,zele_yek,zele_sevem)==1|
      doblepoint(zele_sevem,zele_yek,zele_dovom)==1){
         return 1; 
      }
      else{
          return 0;
      }
}
int doblepoint(int a,int b,int c){
    if (a*a == b*b+c*c){
        return 1;
    }else{
        return 0;
    }
}