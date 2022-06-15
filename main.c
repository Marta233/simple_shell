#include "main.h"
/**
 * main - prints a command
 * @argc: argument  counter
 * @argv: array of arguments
 * Return: number of characters read
 */
int main(int argc, char *argv[])
{
	char inputstr[MAXCOM], *command[MAXLIST];
	int a, loop = 1;

	a = argc - argc;
	while (loop == 1)
	{
		write(STDIN_FILENO, "$ ", 2);
		if (readinput(inputstr) == 0)
		{
			splitusingspace(inputstr, command);
			if (inputstr[0] != '\0')
				cpathandexec(command, argv[0]);
			else
				continue;
		}
		else
			break;
	}
	return (a);
}
