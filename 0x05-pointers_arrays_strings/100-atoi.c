#include <stdio.h>

int _atoi(char *s) 
{
int sign = 1; // Represents the sign of the number, positive by default
int result = 0; // The final integer result

// Skip leading whitespaces (if any)
while (*s == ' ')
s++;
// Handle the sign of the number
if (*s == '-') 
{
sign = -1;
s++;
} 
else if (*s == '+') 
{
s++;
}

// Convert the string to an integer until the first non-digit character is encountered
while (*s >= '0' && *s <= '9') 
{
// Check for potential integer overflow before updating the result
// We use the previous value of result to check if it overflows upon the next multiplication
if (result > (INT_MAX - (*s - '0')) / 10)
{
// Overflow will occur, so return the appropriate extreme value based on the sign
return (sign == 1) ? INT_MAX : INT_MIN;
}

result = result * 10 + (*s - '0');
s++;
}
// Apply the sign to the result and return
return (result * sign);
}

int main() 
{
char str1[] = "123";
char str2[] = "-456";
char str3[] = "   +789";
char str4[] = "   123abc";

printf("Converted value: %d\n", _atoi(str1)); // Output: 123
printf("Converted value: %d\n", _atoi(str2)); // Output: -456
printf("Converted value: %d\n", _atoi(str3)); // Output: 789
printf("Converted value: %d\n", _atoi(str4)); // Output: 123 (ignores the non-digit characters)

return (0);
}

