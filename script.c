#include <stdio.h>
#include <unistd.h>

#define AM      "A.M."
#define PM      "P.M."

void    ft_aura_lieu(int);

void    ft_aura_lieu(int heure)
{
    //check param
    if(heure < 0 || heure > 23)
    {
        printf("Erreur de param..");
        return;
    }
    if(heure == 11)
        printf("%i:00 %s -> %i:00 %s\n", heure, AM, heure + 1, PM);
    else if(heure == 23)
        printf("%i:00 %s -> %i:00 %s\n", heure - 12, PM, heure + 1 - 12, AM);
    else if(heure < 12)
    {
            printf("%i:00 %s -> %i:00 %s\n", heure, AM, heure + 1, AM);
    }
    else if(heure >= 12)
    {
        if(heure == 12)
            printf("%i:00 %s -> %i:00 %s\n", heure, PM, heure + 1 - 12, PM);
        else
            printf("%i:00 %s -> %i:00 %s\n", heure - 12, PM, heure + 1 - 12, PM);
    }
}

int     main(void)
{
    ft_aura_lieu(11);
    return(0);
}