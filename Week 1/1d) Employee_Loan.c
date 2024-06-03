#include <stdio.h>
#include <math.h>

int main()
{
    long int loan1, loan2, loan3, sum, sanc_loan, max_loan, Loan_Bal;
    char Name[20];
    int Designation;
    
    printf("\nEnter the Employee Name: ");
    scanf("%s", &Name);
    printf("\n1. Developer \n2.Team Leader \n3.Associate Manager \n4.Manager\n\nSelect Your Designation: ");
    scanf("%d", &Designation);
    //Assigning Maximum Loan Limit based on the Designation of Employee.
    if(Designation == 1)
        {
            max_loan=50000;
        }
    else if(Designation == 2)
        {
            max_loan=100000;
        }
    else if(Designation == 3)
        {
            max_loan=200000;
        }
    else if(Designation == 4)
        {
            max_loan=500000;
        }
    printf("\n***For your Designation you can avail Maximum of %d Amount***\n", max_loan);
    printf("\nEnter the Amount of Two previous Loan Balances: ");   //Receiving the Loan Bances of previous two Loans.
    scanf("%ld %ld", &loan1, &loan2);
    if(loan1>0 && loan2>0)
        {
            printf("\nSorry! You cannot avail more than Two loans.");   //If a empolyee has availed two Loans then not eligible to get Loan.
            
        }
    else
        {
            printf("\nEnter the value of New Loan: ");
            scanf("%d", &loan3);
            
            Loan_Bal = loan1-loan2+loan3;
                
            if((loan1+loan2 > max_loan) | loan3 > max_loan | Loan_Bal > max_loan) //Checking if the Previous loan or current loan amount is more than the maximim Loan limit.
                {
                    sanc_loan = loan1+loan2+loan3;     //Cummulative of all three loans amount
                    if(sanc_loan>max_loan)      //Checking if the cummulative amount is greater than the max avail loan limit.
                        {
                            sanc_loan = max_loan-(loan1+loan2);
                            printf("\nSorry! You can only avail upto %ld", sanc_loan); //This will print if the Entered loan amount is greater than Available Loan Limit.
                        }
                    else
                        {
                            printf("\nYour New Sanctioned Loan amount is %d", loan3); //If the Entered Loan Amount is lesser than avail Loan Limit then amount will Print.
                        }
                }
        
        }
}
