/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhulee <minhulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:19:39 by jewlee            #+#    #+#             */
/*   Updated: 2024/08/02 11:21:15 by minhulee         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	ft_builtins(t_command *cmd, t_info *info)
{
	if (cmd->builtin_type == CD)
		builtins_cd(info, cmd);
	else if (cmd->builtin_type == ENV)
		builtins_env(info);
	else if (cmd->builtin_type == PWD)
		builtins_pwd(info);
	else if (cmd->builtin_type == ECHO_)
		builtins_echo(cmd, info);
	else if (cmd->builtin_type == EXIT)
		builtins_exit(cmd, info);
	else if (cmd->builtin_type == EXPORT)
		builtins_export(cmd, info);
	else if (cmd->builtin_type == UNSET)
		builtins_unset(cmd, info);
}
