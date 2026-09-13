#include <stdio.h>
int main()
{
    float balance,withdrawal;
    printf("Enter available balance:");
    scanf("%f",&balance);
    printf("Enter withdrawal balance:");
    scanf("%f",&withdrawal);
    if(withdrawal>0 && withdrawal<=balance)
    {
        printf("withdrawal approved");
    }
else{
    printf("withdrawal denied");
}
return 0;
}