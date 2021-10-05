#include<stdio.h>
#include<math.h>

int main()
{
    char * name[100];
    int experience;
    float incentive, avg_ovrtm, tax_deduction, deducted_incentive;
    int three_month_ovrtm[3];
    

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

    incentive = roundf(incentive);

    if (incentive >= 75000)
    {
        tax_deduction = incentive * 0.1;
    }
    else if (incentive >= 50000)
    {
        tax_deduction = incentive * 0.07;
    }
    else if (incentive >= 20000)
    {
        tax_deduction = incentive * 0.05;
    }
    else
    {
        tax_deduction = incentive * 0.03;
    }
    
    deducted_incentive = incentive - tax_deduction;
    deducted_incentive = roundf(deducted_incentive);

    printf("Employee Name: %s\n", name);
    printf("Years of Experience: %d\n", experience);
    if(experience < 5)
    {
        printf("1st Month Overtime: %d\n", three_month_ovrtm[0]);
        printf("2nd Month Overtime: %d\n", three_month_ovrtm[1]);
        printf("3rd Month Overtime: %d\n", three_month_ovrtm[2]);
    }
    printf("Tax deduction: %.2f\n", tax_deduction);
    printf("Not deducted incentive: %.2f\n", incentive);
    printf("Deducted Incentive: %.2f\n", deducted_incentive);

    return 0;
}