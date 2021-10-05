#include<stdio.h>


int main()
{
    char * name[100];
    int experience;
    float incentive;
    int three_month_ovrtm[3];
    float avg_ovrtm;

    printf("Enter your name\n>> ");
    scanf("%[^\n]", name);
    printf("Enter your year of Experience\n>> ");
    scanf("%d", &experience);

    if(experience > 20)
    {
        incentive = experience * 4000;
    }
    else if(experience > 10)
    {
        incentive = experience * 3000;
    }
    else if (experience >= 5)
    {
        incentive = experience * 2000;
    }
    else
    {
        
        
        printf("Enter total Overtime in 1st Month\n>> ");
        scanf("%d", &three_month_ovrtm[0]);
        printf("Enter total Overtime in 2nd Month\n>> ");
        scanf("%d", &three_month_ovrtm[1]);
        printf("Enter total Overtime in 3rd Month\n>> ");
        scanf("%d", &three_month_ovrtm[2]);
        
        avg_ovrtm = (float)(three_month_ovrtm[0] + three_month_ovrtm[1] + three_month_ovrtm[2]) / 3;

        if(avg_ovrtm > 4)
        {
            incentive = avg_ovrtm * 2000;
        }
        else if(avg_ovrtm > 3)
        {
            incentive = avg_ovrtm * 1500;
        }
        else if(avg_ovrtm > 2)
        {
            incentive = avg_ovrtm * 1000;
        }
        else
        {
            incentive = avg_ovrtm * 500;
        }
        
    }
    printf("%f", incentive);
    

}