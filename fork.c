/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 19:29:55 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/30 00:26:44 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // exit(int status) 
#include <stdio.h> // printf(char *fmt), puts(char *s) --> sortie std
#include <unistd.h> // type pid_t, fork()

int main(void)
{
	pid_t pid_fils;

	pid_fils = fork(); // creation processus fils
	if (pid_fils == -1)
	{
		puts("Erreur lors de la creation du pid_f");
		exit(EXIT_FAILURE);
	}
	if (pid_fils == 0)
	{
		printf("Nous sommes dans le fils\n");
		/* la fonction getpid permet de connaître son propre PID */
		printf("Le PID du fils est \%d\n", getpid());
		/* la fonction getppid permet de connaître le PPID
		 * (PID de son père) */
		printf("Le PID de mon père (PPID) est \%d", getppid());
	}
	else
	{
		printf("Nous sommes dans le père\n");
		printf("Le PID du fils est \%d\n", pid_fils);
		printf("Le PID du père est \%d\n", getpid());
		printf("PID du grand-père : \%d", getppid());
	}
	return (0);
}


