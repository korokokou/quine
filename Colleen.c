#include <stdio.h>
#include <stdlib.h>

/*
* ny
* ny
* ny
*/

char	*s = "#include <stdio.h>\n#include <stdlib.h>\n\n/*\n* ny\n* ny\n* ny\n*/\n\nchar\t*s = \"%s\";\n\nint\tft_strlen(char *s)\n{\n\tint i;\n\n\ti = 0;\n\twhile(s[i])\n\t\ti++;\n\treturn (i);\n}\n\nchar\t*escape(char *s)\n{\n\tchar *result;\n\tchar *start;\n\n\n\tresult = malloc(sizeof(char) * ft_strlen(s));\n\tstart = result;\n\twhile (*s)\n\t{\t\tif (*s == '\\t' || *s == '\\n' || *s == '\\\"' || *s == '\\\\')\n\t\t\t{\t*result++ = '\\\\';\n\t\t\t\tif (*s == '\\t')\n\t\t\t\t\t*result++ = 't';\n\t\t\t\telse if (*s == '\\n')\n\t\t\t\t\t*result++ = 'n';\n\t\t\t\telse if (*s == '\\\\')\n\t\t\t\t\t*result++ = '\\\\';\n\t\t\t\telse\n\t\t\t\t\t*result++ = '\"';\n\t\t\t\ts++;\n\t\t\t}\n\t\t\telse\n\t\t\t\t*result++ = *s++;\n\t}\n\tif (!result)\n\t\tprintf(\"merde\");\n\treturn (start);\n}\n\nint main( void )\n{\n\t/*\n\t*\tAUTOBIOGRAPHIQUE BATARD\n\t*/\n\n\tprintf(s, escape(s));\n\treturn (0);\n}\n";

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
	if (!result)
		printf("merde");
	return (start);
}

int main( void )
{
	/*
	*	AUTOBIOGRAPHIQUE BATARD
	*/

	printf(s, escape(s));
	return (0);
}
