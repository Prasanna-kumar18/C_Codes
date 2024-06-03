/*#include <stdio.h>

int main() {
    int num1 = 10, num2 = 4;

    // Print the results with arithmetic operations integrated into printf statements
    printf("Addition of %d + %d is : %d\n", num1, num2, (num1 + num2));
    printf("Subtraction of %d - %d is : %d\n", num1, num2, (num1 - num2));
    printf("Multiplication of %d * %d is : %d\n", num1, num2, (num1 * num2));
    printf("Division of %d / %d is : %d\n", num1, num2, (num1 / num2));
    printf("Modulus of %d %% %d is : %d\n", num1, num2, (num1 % num2));
    printf("Increment of num1 is : %d\n", ++num1);
    printf("Decrement of num2 is : %d\n", --num2);

    return 0;
}



#include <stdio.h>

int main() {
    int num1 = 10, num2 = 4;

    // Check and print the results using if statements
    if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    else
        printf("%d is not greater than %d\n", num1, num2);

    if (num1 == num2)
        printf("%d is equal to %d\n", num1, num2);
    else
        printf("%d is not equal to %d\n", num1, num2);

    if (num1 >= num2)
            printf("%d is greater than or equal to %d\n", num1, num2);
        else
            printf("%d is not greater than or equal to %d\n", num1, num2);

    if (num1 != num2)
        printf("%d is not equal to %d\n", num1, num2);
    else
        printf("%d is equal to %d\n", num1, num2);

    return 0;
}


#include <stdio.h>

int main() {
    int num1 = 10, num2 = 4;
    int result_and, result_or, result_not;

    // Perform logical operations
    result_and = (num1 & num2); // Logical AND
    result_or = (num1 | num2);  // Logical OR
    result_not = !num1;          // Logical NOT

    // Print the results with logical operations integrated into printf statements
    printf("Logical AND of %d && %d is : %d\n", num1, num2, result_and);
    printf("Logical OR of %d || %d is : %d\n", num1, num2, result_or);
    printf("Logical NOT of !%d is : %d\n", num1, result_not);

    return 0;
}


#include <stdio.h>

int main() {
    int num1 = 10, num2 = 4;
    int result_and, result_or, result_xor, result_complement;
    int result_left_shift, result_right_shift;

    // Perform bitwise operations
    result_and = num1 & num2;         // Bitwise AND
    result_or = num1 | num2;          // Bitwise OR
    result_xor = num1 ^ num2;         // Bitwise XOR
    result_complement = ~num1;        // Bitwise complement
    result_left_shift = num1 << 2;    // Left shift by 2 bits
    result_right_shift = num1 >> 1;   // Right shift by 1 bit

    // Print the results of bitwise operations
    printf("Bitwise AND of %d & %d is : %d\n", num1, num2, result_and);
    printf("Bitwise OR of %d | %d is : %d\n", num1, num2, result_or);
    printf("Bitwise XOR of %d ^ %d is : %d\n", num1, num2, result_xor);
    printf("Bitwise complement of ~%d is : %d\n", num1, result_complement);
    printf("Left shift of %d << 2 is : %d\n", num1, result_left_shift);
    printf("Right shift of %d >> 1 is : %d\n", num1, result_right_shift);

    return 0;
}


#include <stdio.h>

int main() {
    int num = 10;

    num = num;        // Simple assignment
    printf("Result after simple assignment: %d\n", num);
    num += 5;         // Addition assignment
    printf("Result after addition assignment: %d\n", num);
    num -= 3;         // Subtraction assignment
    printf("Result after subtraction assignment: %d\n", num);
    num *= 2;         // Multiplication assignment
    printf("Result after multiplication assignment: %d\n", num);
    num /= 4;         // Division assignment
    printf("Result after division assignment: %d\n", num);
    num %= 3;         // Modulus assignment
    printf("Result after modulus assignment: %d\n", num);

    return 0;
}


#include <stdio.h>

int main() {
    int num1 = 10, num2 = 4;
    int max;

    // Find the maximum of num1 and num2 using the ternary operator
    max = (num1 > num2) ? num1 : num2;

    // Print the result
    printf("The maximum of %d and %d is: %d\n", num1, num2, max);

    return 0;
}
*/

#include <stdio.h>

int result=1;

int main() {

    result = 5 + 3 * 2;    // Multiplication has higher precedence than addition
    printf("Result 1: %d\n", result);

    result = (5 + 3) * 2;  // Parentheses can change the precedence
    printf("Result 2: %d\n", result);

    result = 10 / 5 * 2;   // Left-to-right associativity
    printf("Result 3: %d\n", result);

    result = 10 / (5 * 2); // Parentheses can change the associativity
    printf("Result 4: %d\n", result);

    return 0;
}
