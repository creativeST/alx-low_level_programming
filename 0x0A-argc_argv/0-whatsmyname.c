#include <stdio.h>

/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 
 */
int main(int argc, char *argv[])
{
        argc --; 
	printf("%s\n", argv[0]);
	return (0);
}
