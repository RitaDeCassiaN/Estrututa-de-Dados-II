//Questao12
#include <stdio.h>

void printRoman (int number)
{
int decimal[] = { 100, 90, 50, 40, 10, 9, 5, 4, 1 };
char* roman[] = { "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

for (int i = 0; i < 9; i++) {
while (number >= decimal[i]) {
printf("%s", roman[i]);
number -= decimal[i];
}
}
}

int main()
{
printf("Decimal\tRoman\n");
for (int i = 1; i <= 100; i++) {
printf("%d\t", i);
printRoman(i);
printf("\n");
}
return 0;
}