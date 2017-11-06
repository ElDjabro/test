/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putenv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldjabro <eldjabro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:48:54 by eldjabro          #+#    #+#             */
/*   Updated: 2017/10/29 19:19:14 by eldjabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> /* pour utiliser getenv */

int main(void)
{
	char *path, *home, *nouveaupath;
	char assignation[150];
	path = getenv("PATH");
	home = getenv("HOME");
	printf("ancien PATH : %s\net HOME : %s\n",
			path, home);
	sprintf(assignation, "PATH=%s:%s/bin", path, home);
	putenv(assignation);
	nouveaupath = getenv("PATH");
	printf("nouveau PATH : \n%s\n", nouveaupath);
	return 0;
}
