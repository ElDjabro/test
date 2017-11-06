/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trsft_bin_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:42:11 by eldjabro          #+#    #+#             */
/*   Updated: 2017/11/06 22:02:43 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/* fprintf() puts() */
#include <unistd.h>
/* fork() pipe() */
#include <stdlib.h>
/* constantes EXIT_FAILURE et EXIT_SUCCESS */
#include <errno.h>
/* gestion des erreurs perror() et errno */
#include <sys/wait.h>
/* wait() et waitpid() */
#include <math.h>
/* saisie de la valeur x dans pere et transmet le sinus(x) au fils */
int main(void)
{
	pid_t	pid_fils;
	int		tube[2];
	/* tube[0] --> sortie du tube (lecture/ecoute des données) */
	/* tube[1] --> entree du tube (ecriture/envoi des données) */
	double	x;
	double	value_R;
	double	value_W;

	/* Creation du pipe toujours AVANT le fork */
	puts("Creation d'un tube\n");
	if (pipe(tube) == -1)
	{
		fprintf(stderr, "Error pipe\n");
		return (EXIT_FAILURE);
	}
	switch (pid_fils = fork())
	{
		case -1 : /* Pb dans fork */
			perror("Error in fork\n");
			exit(errno);
		case 0 : /* Dans le processus fils */
			close(tube[1]);
			read(tube[0], &value_R, sizeof(double));
			printf("Le fils (%d) a lu : %.2f\n", getpid(), value_R);
			break;
		default : /* Dans le pere */
			printf("Fermeture sortie dans le père (pid = %d)\n", getpid());
			close(tube[0]);
			puts("Entrez x :");
			scanf("%lf", &x);
			value_W = sin(x);
			write(tube[1], &value_W, sizeof(double));
			wait(NULL);
			break;
	}
	return (0);
}
