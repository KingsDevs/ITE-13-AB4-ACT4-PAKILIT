/*
    Name: Karl Shane Pakilit
    Section: AB4
*/

#include<stdio.h> //this file has input and output that I will use throughout the program
#include<math.h>// this file has math related function that I will use to this program especially to roundf

int main() // this function will be called by the OS once the user runs the program
{
    
    int experience; // this integer variable will store the year of experience of employee
          
    /* this four floating point variables will store the following
        incentive = total incentive not deducted by tax
        avg_ovrtm = the average overtime of the employee
        tax_deduction = the value deducted to incentive
        deducted_incentive = total incentive the employee will deducted by tax
    */
    float incentive, avg_ovrtm, tax_deduction, deducted_incentive;
    /*
        this array of integer three_month_ovrtm stores the total overtime of last three months
        Index 0 = first month
        Index 1 = second month
        Index 2 = third month
    */
    int three_month_ovrtm[3]; 
    
    
    printf("Enter your year of Experience\n>> "); //prompts the user to enter the year of experience
    scanf("%d", &experience); // get the inputted year from the user and store it to experience

    if(experience > 20) // if experience is greater than 20 then...
    {
        incentive = experience * 4000; // multiply experience by 4000 and store it in incentive
    }
    else if(experience > 10) // if experience is greater than 10 then...
    {
        incentive = experience * 3000; // multiply experience by 3000 and store it in incentive
    }
    else if (experience >= 5) // if experience is greater than or equal to 5 then...
    {
        incentive = experience * 2000; // multiply experience by 2000 and store it in incentive
    }
    else // if non of the condition is met this will be executed
    {    
        printf("Enter total Overtime in 1st Month\n>> "); // prompts the user to enter the total overtime in the first month
        scanf("%d", &three_month_ovrtm[0]); //get the inputted first month total overtime and stored to three_month_ovrtm index 0
        printf("Enter total Overtime in 2nd Month\n>> "); // prompts the user to enter the total overtime in the second month
        scanf("%d", &three_month_ovrtm[1]); //get the inputted second month total overtime and stored to three_month_ovrtm index 1
        printf("Enter total Overtime in 3rd Month\n>> "); // prompts the user to enter the total overtime in the third month
        scanf("%d", &three_month_ovrtm[2]); //get the inputted third month total overtime and stored to three_month_ovrtm index 2
        
        // adds the total three month and cast it to float then divide by 3 after that stores it to avg_ovrtm
        avg_ovrtm = (float)(three_month_ovrtm[0] + three_month_ovrtm[1] + three_month_ovrtm[2]) / 3;

        if(avg_ovrtm > 4) // if avg_ovrtm is greater than 4 then...
        {
            incentive = avg_ovrtm * 2000; // multiply avg_ovrtm to 2000 and store it to incentive
        }
        else if(avg_ovrtm > 3) // if avg_ovrtm is greater than 3 then...
        {
            incentive = avg_ovrtm * 1500; // multiply avg_ovrtm to 1500 and store it to incentive
        }
        else if(avg_ovrtm > 2) // if avg_ovrtm is greater than 2 then...
        {
            incentive = avg_ovrtm * 1000; // multiply avg_ovrtm to 1000 and store it to incentive
        }
        else // if non of the condition is met this will be executed
        {
            incentive = avg_ovrtm * 500; // multiply avg_ovrtm to 500 and store it to incentive
        }
        
    }

    incentive = roundf(incentive); // rounds the incentive

    if (incentive >= 75000) // if incentive is greater than or equal to 75000 then ...
    {
        tax_deduction = incentive * 0.1; // multiply incentive by 0.1 or 10% and store it to tax_deduction
    }
    else if (incentive >= 50000) // if incentive is greater than or equal to 50000 then ...
    {
        tax_deduction = incentive * 0.07; // multiply incentive by 0.07 or 7% and store it to tax_deduction
    }
    else if (incentive >= 20000) // if incentive is greater than or equal to 20000 then ...
    {
        tax_deduction = incentive * 0.05;  // multiply incentive by 0.05 or 5% and store it to tax_deduction
    }
    else // if non of the condition is met this will be executed
    {
        tax_deduction = incentive * 0.03;  // multiply incentive by 0.03 or 3% and store it to tax_deduction
    }
    
    deducted_incentive = incentive - tax_deduction; //subtract incentive by tax_deduction
    deducted_incentive = roundf(deducted_incentive); //rounds deducted_incentive

    printf("Total Incentive: %.2f\n", deducted_incentive); //outputs the deducted_incentive which is the total incentive 

    return 0; //return 0 by main function
}