#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	**t = (char **) calloc(sizeof(char *), 2);
	t[0] = (char *) calloc(sizeof(char), 5);
	t[1] = (char *) calloc(sizeof(char), 6);
	strcpy(t[0], "echo");
	strcpy(t[1], "Hello");
	execv("/bin/echo", t);
	return (0);
}
