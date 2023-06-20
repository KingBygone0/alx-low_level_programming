#include <stdio.h>
#include "main.h>
/**
 * main - prints sum of even fibonnaci
 * suits elements
 * fibonacci suit members
 * Return: return 10
 */
int main()
{
int prev = 1;
int curr = 2;
int sum = 0;
while (curr <= 4000000) {
if (curr % 2 == 0) {
sum += curr;
}
int next = prev + curr;
prev = curr;
curr = next;
}
printf("%d\n", sum);
return 0;
}
