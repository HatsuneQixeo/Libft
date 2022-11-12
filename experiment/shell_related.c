#include "libft.h"

// MAN BASH

//Evaluated as reading variable
//?Or the following expression becomes variable?
//Cannot contain backslash or another opening curly brace
void	shell_curlybrace(const char *str)
{

}

//Evaluated as running command
//Second opening parenthesis will be evaluated as math expression?
void	shell_parenthesis(const char *str)
{


}

//Evaluated as connector between two lines
//The next character after it is evaluated as a normal character
void	shell_backslash(const char *str)
{

}

void	shell_bracket(const char *str)
{

}

//Evaluated as reading variable
void	shell_variable(const char *str)
{

}

void	shell_command(const char *str)
{

}

size_t	pipex_varname(const char *input)
{
	size_t	i;

	i = 0;

	while (ft_isalnum(input[i]) || ft_strchr("_{}", input[i]))
		i++;
	return (i);
}

// char	*pipex_readvar(char **envp, const char *input, size_t len_var_name)
// {
// 	char	*var_name;
// 	char	*str_var;

// 	var_name = ft_substr(input, 1, len_var_name);
// 	var_name = ft_strmodify(var_name, "=", ft_strjoin);
// 	str_var = ft_strliststr(envp, var_name);
// 	if (str_var)
// 		str_var = ft_strdup(str_var + ft_strlen(var_name));
// 	else
// 		str_var = ft_strdup("");
// 	free(var_name);
// 	return (str_var);
// }

// int	pipex_varandcmd(char **envp, const char *input, int fd_heredoc)
// {
// 	size_t	len_var_name;

// 	if (input[1] == '(')
// 	{
// 		char	*cmd;
// 		char	*closing;
// 		int		pipex[2];

// 		closing = ft_strchr(input, ')');
// 		if (input[2] == '(' || !closing)
// 			ft_exitprintf(1, "zsh: parse error");
// 		ft_pipeinit(pipex);
// 		cmd = ft_substr(input, 2, closing - (input + 2));
// 		pipex_forking(cmd, -1, pipex[1], envp);
// 		free(cmd);
// 		char	*output;
// 		output = ft_file_extract(pipex[0]);
// 		close(pipex[0]);
// 		ft_strrelease_fd(ft_strmodify(output, "\n", ft_strtrim), fd_heredoc);
// 		return (closing - input + 1);
// 	}
// 	else
// 	{
// 		len_var_name = pipex_varname(input + 1);
// 		ft_strrelease_fd(pipex_readvar(envp, input, len_var_name), fd_heredoc);
// 		return (len_var_name + 1);
// 	}
// }

// void	pipex_variable(char **envp, const char *input, int fd_heredoc)
// {
// 	while (*input)
// 	{
// 		if (!ft_strncmp(input, "$$", 2))
// 		{
// 			ft_putnbr_fd(getpid(), fd_heredoc);
// 			input += 2;
// 		}
// 		else if (!ft_strncmp(input, "\\$", 2))
// 		{
// 			ft_putchar_fd('$', fd_heredoc);
// 			input += 2;
// 		}
// 		else if (!ft_strncmp(input, "$(", 2))//command
// 			input += pipex_varandcmd(envp, input, fd_heredoc);
// 		else if (!ft_strncmp(input, "${", 2) || *input == '$')
// 			input += pipex_varandcmd(envp, input, fd_heredoc);
// 		else
// 			input += ft_putchar_fd(*input, fd_heredoc);
// 		ft_printf("inputloop: %b\n", input);
// 	}
// 	ft_putchar_fd('\n', fd_heredoc);
// }

static char	*ft_findenvp(char **envp, const char *varname)
{
	char	*var_find;
	size_t	len_varname;

	var_find = ft_strjoin(varname, "=");
	len_varname = ft_strlen(var_find);
	while (*envp)
		if (!ft_strncmp(*envp++, var_find, len_varname))
			break ;
	free(var_find);
	if (*envp)
		return (*--envp + len_varname);
	return (0);
}

int	main(int argc, char **argv, char **envp)
{
	if (argc == 1)
		return (0);
	ft_putstrlist_fd(envp, 1);
	while (*++argv)
		ft_printf("findenvp: %s\n", ft_findenvp(envp, *argv));
}
