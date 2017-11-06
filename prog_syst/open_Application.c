/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_Application.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:10:36 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/31 16:11:02 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *arg[] = {"open",argv[1], NULL};
	
	if (argc <= 1)
	{
		puts("No argument here...Enter path to Application");
		return (EXIT_FAILURE);
	}
	else
		if (execv("/usr/bin/open", arg) == -1)
		{
			perror("Error opening iTunes");
			return (EXIT_FAILURE);
		}
	return (EXIT_SUCCESS);
}
