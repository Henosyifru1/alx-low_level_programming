#include "main.h"
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int i;

i = 98;
positive_or_negative(i);

return (0);
}
