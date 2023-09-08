#include <stdio.h>


int main(void)
{
for (char let = 'a'; let <= 'z'; let++)
{
if (let != 'e' && let != 'q')
{
putchar(let);
}
}
	putchar('\n');
	return (0);
}
