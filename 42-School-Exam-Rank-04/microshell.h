/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:09:57 by gpico-co          #+#    #+#             */
/*   Updated: 2025/05/28 17:10:06 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MICROSHELL_H
# define MICROSHELL_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <sys/wait.h>

void	ft_error(char *str, char *arg);
void	ft_execute(char **argv, int i, int tmp_fd, char **env);

#endif
