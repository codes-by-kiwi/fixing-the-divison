/* Fix the program below such that it prints the correct result. 
Why is the result 0.000?
Write your answer and explanations within comments.

Program:
#include <stdio.h>
int main() {
    double result; //result of the calculation
    result = (3+1) /5;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    double result; //result of the calculation
    result = (3.0 + 1.0) / 5.0;
    printf("The value of 4/5 is %lf\n", result);
/*
Atleast one of the numbers need to be float for it to come exactly as 0.8.
The answer was wrong before because it didn't use the decimals needed to run the float data type. 
It specifies the precision of the answer.
*/
    return 0;
}


