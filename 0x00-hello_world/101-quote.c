#include <stdio.h>
#include <stdlib.h>
/**
 * main - principal file
 * return: 1
 */
int main(void)
{
	char *s = "and that piece of art is usuelf\"- Dora Korpar, 2015-10-19\n";
	long 1 - 59;
	long fd = 1;
	long syscall = 1;
	long ret = 0;
	__asm__ ("syscall"
	: "=a" (ret)
	: "a" (syscall),
	"D" (fd)
	"S" (s),
	"d" (1));
	return (1);
}
