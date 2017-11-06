/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 00:26:55 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/30 00:37:21 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // fork(), pid_t
#include <stdio.h>
#include <stdlib.h> // exit(int)
#include <sys/wait.h> // waitpid(), wait()
#include <errno.h> /* permet de recuperer les codes d'erreurs */


pid_t pid_fils;

int main(void)
{
	int status;

	switch (pid_fils=fork())
	{
		case -1 : perror("Problème dans fork()\n");
				  exit(errno); /* retour du code d'erreur */
				  break;
		case 0 : puts("Je suis le fils");
				 puts("Je retourne le code 3");
				 exit(3);
		default : puts("Je suis le père");
				  puts("Je récupère le code de retour");
				  wait(&status);
				  printf("code de sortie du fils %d : %d\n",
						  pid_fils, WEXITSTATUS(status));
				  break;
	}
	return 0;
}
