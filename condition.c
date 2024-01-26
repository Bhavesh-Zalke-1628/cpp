//  profit or loss
//  cp and sp

#include <stdio.h>
main()
{
    int cp, sp;
    printf("Enter cost price:");
    scanf("%d", &cp);
    printf("Enter  selling price :");
    scanf("%d", &sp);
    if (cp < sp)
    {
        printf("Profit");
    }
    else if (cp > sp)
    {
        printf("loss");
    }
    else
    {
        printf("No loss or No profit");
    }
}
