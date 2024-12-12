#include<stdio.h>
int main(){

int r,y,g;
printf("Red Light Duration: ");
scanf("%d",&r);
printf("yellow Light Duration: ");
scanf("%d",&y);
printf("green Light Duration: ");
scanf("%d",&g);
for(int i=r;i>=0;i--){
        printf("red signal time is %d\n",i);
}
for(int j=y;j>=0;j--){
        printf("yellow signal time is %d\n",j);
}
for(int k=g;k>=0;k--){
        printf("green signal time is %d\n",k);
}
return 0;
}
