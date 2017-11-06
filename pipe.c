/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:13:44 by eldjabro          #+#    #+#             */
/*   Updated: 2017/11/06 16:41:32 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/* Pour les fprintf() et puts() */
#include <unistd.h>
/* Pour l'utilisation des fork() et des pipe()*/
#include <sys/types.h>
/* Valeur retourné par fork est un type pid_t */
#include <stdlib.h>
/* Pour les constantes EXIT_* */
#include <sys/wait.h>
/* Pour les fonctions wait() et waitpid() */
#include <errno.h>
/* Pour les gestions d'erreur perror() et errno*/

#define BUFFER_SIZE 256

int main(void)
{
	pid_t			pid_fils;
	int				tube[2]; 
	/* tube[0] --> sortie du tube (lecture des données) */
	/* tube[1] --> entree du tube (ecriture des données) */
	unsigned char	buffer_R[256];
	unsigned char	buffer_W[256];

	puts("Creation d'un tube");
	if (pipe(tube) != 0)
	{
		perror("Probleme de creation du tube\n");
		fprintf(stderr, "Erreur dans pipe\n");
		return (EXIT_FAILURE);
	}
	pid_fils = fork();
	if (pid_fils == -1)
	{
		perror("Probleme de creation du pid_fils\n");
		fprintf(stderr, "Erreur dans fork\n");
		return (EXIT_FAILURE);
	}
	if (pid_fils == 0) /* Nous sommes dans le fils */
	{
		printf("Fermeture de l'entree du fils (pid = %d)\n", getpid());
		close(tube[1]);
		read(tube[0], buffer_R, BUFFER_SIZE);
		printf("le fils (%d) a lu : %s", getpid(), buffer_R);
	}
	else /* Nous sommes dans le pere */
	{
		printf("Fermeture de la sortie du pere (pid = %d)\n", getpid());
		close(tube[0]);
		sprintf(buffer_W, "Message du pere (%d) au fils\n", getpid());
		write(tube[1], buffer_W, BUFFER_SIZE);
		wait(NULL);
	}
	return (0);
}

