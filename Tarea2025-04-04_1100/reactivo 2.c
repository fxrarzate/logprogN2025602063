#include <stdio.h>

int main()
{
    char PIZZA,INGREDIENTES;
    printf("¿que tipo de pizza quiere?, responda con la palabra vegetariana o normal de ser el caso: ");
    scanf("%s,&PIZZA");

    if(PIZZA="vegetariana")
    {
       printf("elija su ingrediente: \n");
        printf("pimiento\n");
        printf("tofu\n");
        scanf("%s,&INGREDIENTES");

        if(INGREDIENTES="pimiento")
        {
           printf("su pizza es vegetariana y contiene los siguientes ingredientes:mozzarella,tomate y pimiento");
        }

        else if (INGREDIENTES="tofu")
        {
            printf("su pizza es vegetariana y contiene los siguientes ingredientes:mozzarella,tomate y tofu");
        }
        else
         {
             printf("ese ingrediente no existe");
         }
    }

    else if (PIZZA="normal")

    { printf("elija su ingrediente: \n");
        printf("peperoni\n");
        printf("jamon\n");
        printf("salmon\n");
        scanf("%s&INGREDIENTES");


        if (INGREDIENTES="peperoni")
        {
            printf("su pizza es normal y contiene los siguientes ingredientes:mozzarella,tomate y peperoni");
        }

        else if (INGREDIENTES="jamon")
        {
           printf("su pizza es normal y contiene los siguientes ingredientes:mozzarella,tomate y jamon");
        }

        else if (INGREDIENTES="salmon")
        {
           printf("su pizza es normal y contiene los siguientes ingredientes:mozzarella,tomate y salmon");
        }

        else
        {
            printf("ese ingrediente no existe");
        }
    }

    else
    {
        printf("esa pizza no existe");
    }
    return 0;
}



