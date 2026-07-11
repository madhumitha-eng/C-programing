#include <stdio.h>
int main() {
    int year,rating,bending;
    printf("Enter enxperience year:");
    scanf("%d",&year);
    printf("Enter Performance Rating:");
    scanf("%d",&rating);
    printf("Pending Warning:");
    scanf("%d",&bending);
    if(year>=5)
    {
        if(rating>=8)
        {
            if(bending==0)
            printf("Promotion Approved");
            else
            printf("Promotion Rejected");
        }
        else
        printf("Performance Too Low");
    }
    else
    printf("Experience Not Enough");
    return 0;
}
