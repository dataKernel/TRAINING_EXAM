/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   script.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: data_kernel <data_kernel@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:52:13 by data_kernel       #+#    #+#             */
/*   Updated: 2024/08/17 19:09:52 by data_kernel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *, char *, unsigned int);

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i = 0;

	while (i < n && (s1[i] || s2[i]))
	{
		//debuging
		//printf("iterations:%i___", i);
		if(s1[i] < s2[i] || s1[i] > s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return(0);
}

int		main(void)
{
	printf("%i", ft_strncmp("ab", "ab", 10));
	return(0);
}