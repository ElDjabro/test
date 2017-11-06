/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execps.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:02:26 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/31 15:30:33 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Pour printf() */
#include <stdio.h>
/* Pour EXIT_SUCCESS et EXIT_FAILURE */
#include <stdlib.h>
/* Pour fork() et execv() */
#include <unistd.h>


int main(void)
{
	char *arg[] =  {"ps","u", NULL};
	if(execv("/bin/ps", arg) == -1)
	{
		perror("Erreur execv\n");
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
