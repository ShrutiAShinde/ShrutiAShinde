//ASCCI
#include<stdio.h>

void ASCCI()
{
        int iASCCI = 0;

        for(iASCCI = -127 ; iASCCI <= 128 ; iASCCI++)
        {
                printf("\t\t\t\t\t\t\t\t\t%d\t=\t%c\t\t\t\t\t\t\t\t\t\n" , iASCCI , iASCCI);
        }
        printf("\n\n");
}

int main()
{
    ASCCI();
    return 0;
}
