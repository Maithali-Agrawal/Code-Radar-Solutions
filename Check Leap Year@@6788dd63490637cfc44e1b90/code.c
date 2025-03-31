#include<stdio.h>
int main(){
    int LeapYear;
    scanf("%d", LeapYear);
    if ((LeapYear % 4==0 && LeapYear % 100==0)||(LeapYear % 400==0)){
    printf("Leap Year");}
    else{
        printf("Not a Leap Year");
    }
    return 0;
}