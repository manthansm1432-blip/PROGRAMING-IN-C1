#include <stdio.h>
#include <math.h>
int main( ){
    int year;
    printf("the year is:");
    scanf("%d",&year);

    if((year%400 == 0)||(year%4==0 && year%100!=0)){
      printf("it is leap year");
      }
    else{
    printf("it is no a leap year");
    }
    return 0;
}
