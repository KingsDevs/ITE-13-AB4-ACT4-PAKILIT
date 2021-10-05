#include<stdio.h>


int main()
{
    char * name[100];
    int experience, incentive;

    printf("Enter your name\n>> ");
    scanf("%[^\n]", name);
    printf("%s" , name);
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
        int three_month_ovrtm[3];
        float avg_ovrtm;
        printf("Enter Overtime in Past 3 Months: ");
        scanf("%d%d%d", &three_month_ovrtm[0], &three_month_ovrtm[1], &three_month_ovrtm[2]);

        avg_ovrtm = (three_month_ovrtm[0] + three_month_ovrtm[1] + three_month_ovrtm[2]) / 3;

    }
    //printf("%d", incentive);
    

}