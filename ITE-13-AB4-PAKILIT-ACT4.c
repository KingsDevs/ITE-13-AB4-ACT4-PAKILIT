#include<stdio.h>


int main()
{
    int experience, overtime, incentive;
    printf("Enter your year of Experience: ");
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

    }
    //printf("%d", incentive);
    

}