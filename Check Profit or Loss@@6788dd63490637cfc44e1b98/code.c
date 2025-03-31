#include<stdio.h>
int main(){
    int CostPrice, SellingPrice;
    scanf("%d %d", &CostPrice,&SellingPrice);
    if (SellingPrice>CostPrice){
        printf("Profit");
    }
    else if (SellingPrice<CostPrice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}