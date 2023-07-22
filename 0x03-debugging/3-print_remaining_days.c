#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in nummber format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 || year % 100 == 0) && !(year % 400 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day_of_the_year: %d\n", day);
printf("Remaining_days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Day_of_the_year: %d\n", day);
printf("Remaining_days: %d\n", 365 - day);
}
}
}
