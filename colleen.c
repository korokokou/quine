/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colleen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 18:31:01 by                   #+#    #+#             */
/*   Updated: 2017/12/19 19:44:02 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

/* 
* ny
* ny
* ny
*/

char *s = "";

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

	result = malloc(sizeof(char) * ft_strlen(s));
	while (*s)
	{		if (*s == '\t' || *s == '\n' || *s == '\"' || *s == '\'')
			{	*result++ = '\\';
				if (*s == '\t')
					*result++ = 't';
				else if (*s == '\n')
					*result++ = 'n';
				else if
					*result++ = '\'';
				else
					*result++ = '\"';
				*s++;
			}
			else
				*result++ = *s++;	
	}

	return (result);
}

int main( void )
{
	/*
	*	AUTOBIOGRAPHIQUE BATARD
	*/

	printf(s, escape(s)); 
	return (0);
}
