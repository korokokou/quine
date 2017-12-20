#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
* ny
*/

char	*s = "%stoto\n";

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*escape(char *s)
{
	char *result;
	char *start;


	result = malloc(sizeof(char) * ft_strlen(s));
	start = result;
	while (*s)
	{		if (*s == '\t' || *s == '\n' || *s == '\"' || *s == '\\')
			{	*result++ = '\\';
				if (*s == '\t')
					*result++ = 't';
				else if (*s == '\n')
					*result++ = 'n';
				else if (*s == '\\')
					*result++ = '\\';
				else
					*result++ = '"';
				s++;
			}
			else
				*result++ = *s++;
	}
	return (start);
}

int main( void )
{
	int fd = open("kid.c", O_CREAT);	
	if (fd != -1)
	{
		dprintf(fd, s, "bernard");
		close(fd);
	}
	return (0);
}
