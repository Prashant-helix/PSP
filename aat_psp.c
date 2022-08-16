#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float t_hot,t_cold,area,thick,heat,ems,time,temp,t_final,k;
    int ch;
    printf("\n\nMAIN MENU\n\n");
    printf("1.Conduction");
    printf("\n2.Convection");
    printf("\n3.Radiation");
    printf("\n4.Rate of cooling");
    printf("\nenter choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("\nEnter the temperature of hot region and cold region");
                scanf("%f %f",&t_hot,&t_cold);
                printf("\nEnter thickness and area of body in m");
                scanf("%f %f",&thick,&area);
                printf("\nEnter thermal conductivity confficient k :");
                scanf("%f",&k);
                heat=k*area*(t_hot-t_cold)/thick;
                printf("\nheat transfer through conduction is =%f",heat);
                break;

        case 2: printf("\nEnter the temperature of hot liquid and cold liquid");
                scanf("%f %f",&t_hot,&t_cold);
                printf("\nEnter convection haet confficient k :");
                scanf("%f",&k);
                printf("\nenter area");
                scanf("%f",&area);
                heat=k*area*(t_hot-t_cold);
                printf("\nHeat transfer through convection is =%f",heat);
                break;
        
        case 3: printf("\nEnter radiator temperature and sorrounding temperature");
                scanf("%f %f",&t_hot,&t_cold);
                printf("\nEnter area and emssivity");
                scanf("%f",&area,&ems);
                printf("\nEnter stephan constant");
                scanf("%f",&k);
                heat=k*area*ems*(t_hot-t_cold);
                printf("\n ");
                printf("\nHeat transfer through Radiation is =%f",heat);
                break;

        case 4: printf("\nEnter thermal conductivity confficient k :");
                scanf("%f",&k);       
                printf("\nEnter the temperature of hot region and cold region");
                scanf("%f %f",&t_hot,&t_cold);
                printf("\nenter time to cool down in sec");
                scanf("%f",&time);
                temp=(-k*time);
                t_final=t_cold+((t_hot-t_cold)*exp(temp));
                printf("\nFinal temperature after time T is =%f",t_final);
                break;

        default : printf("invalid input");
                break;        
    }
    getch();
    return 0;
}