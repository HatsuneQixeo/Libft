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
//1/2cmb backslash == 1, 3/4cmb backslash == 2
//after comfirming its 2 backslash together  n / 2 (if n % 2 nbr++)
//Note: Currently mimicking the behaviour of echo '\\\\\\\\\\' 5 * 2
void	shell_backslash_echo(const char *str)
{
	int	backslash_count;
	int	repeat;

	backslash_count = 1;
	if (backslash_count % 2)
		backslash_count--;
	if (backslash_count >= 2)
	{
		char	*str_repeat;

		repeat = ((backslash_count - 2) / 4) + 1;
		ft_strrelease_fd(ft_strcreate('\\', repeat), 1);
	}
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

void	shell_backslash(char *str)
{
	if (*str != '\\')
		return ;
	else if (str[1] == '\n')
		ft_memmove(str, str + 2, ft_strlen(str + 2) + 1);
	else
		ft_memmove(str, str + 1, ft_strlen(str + 1) + 1);
}

static int	ft_bquote(char *src)
{
	char	quote_start;
	char	*end;

	if (!src || !*src)
		return (0);
	quote_start = *src;
	end = ft_memmove(src, src + 1, ft_strlen(src + 1) + 1);
	while (*end && *end != quote_start)
	{
		if (*end == '\\')
			shell_backslash(end);
		end++;
	}
	if (*end != quote_start)
		return (!ft_dprintf(2, "zsh: parse error\n") - 1);
	ft_memmove(end, end + 1, ft_strlen(end + 1) + 1);
	return (end - src);
}

static char	*ft_parse(char **str)
{
	char	*str_ptr;
	char	*start;
	int		read;

	str_ptr = *str;
	start = str_ptr;
	while (*str_ptr && !ft_isspace(*str_ptr))
	{
		if (*str_ptr == '\'' || *str_ptr == '"')
		{
			read = ft_bquote(str_ptr);
			if (read == -1)
				return (NULL + !ft_dprintf(2,
					"Missing closing quote (%c) at (%s)\n", *str_ptr, str_ptr));
			str_ptr += read - 1;
		}
		else if (*str_ptr == '\\')
			shell_backslash(str_ptr);
		str_ptr++;
	}
	*str = str_ptr;
	return (ft_substr(start, 0, str_ptr - start));
}

static char	**ft_parsemove(char *src)
{
	t_list	*lst;
	char	*parse;

	lst = 0;
	while (*src)
	{
		while (ft_isspace(*src))
			src++;
		if (!*src)
			break ;
		parse = ft_parse(&src);
		if (!parse)
		{
			ft_lstclear(&lst, free);
			return (0);
		}
		ft_lstadd_back(&lst, ft_lstnew(parse));
	}
	return (ft_lsttoaa_clear(&lst));
}

char	**ft_parsesplit(const char *src)
{
	char	*src_dup;
	char	**strlist;

	src_dup = ft_strdup(src);
	strlist = ft_parsemove(src_dup);
	free(src_dup);
	return (strlist);
}

#define bout	"Hatsune\\ Miku\\ is\\ cute"
#define bbquote		"Hatsune'\\''Miku'\\'is'\\'cute"// (valid)
#define bb		"Hatsune'\\\\'Miku'\\\\'is'\\\\'cute"
#define tab		"Hatsune'\t'Miku'\t'is'\t'cute"
#define space	"Hatsune' 'Miku' 'is' 'cute"
#define bquote	"Hatsune'\\''Miku'\\''is'\\''cute"
#define quote_error	"Hatsune'\''Miku'\''is'\''cute"
#define nlgone	"Hatsune\\\nMiku\\\nis\\\ncute"
//Parsing the user input
//Note: Backslash enter will connect the line \'\10'
int	main(void)
{
	char	*parse_miku;
	char	**split;

	parse_miku = ft_strdup(nlgone);
	// parse_miku = ft_strinsert(bb, "       ", bquote);
	ft_printf("src: %s\n", parse_miku);
	split = ft_parsesplit(parse_miku);
	ft_putstrlist_fd(split, 1);
	ft_clear_strlist(split);
	free(parse_miku);
	system("leaks -q shell_related.miku");
}

//Find envp
	// if (**command == '.')
	// {
	// 	ft_memmove(*command, (*command) + 1, ft_strlen((*command) + 1) + 1);
	// 	*command = ft_strmodify(*command, ft_findenvp(envp, "PWD"), ft_strrjoin);
	// 	if (!access(*command, F_OK | X_OK))
	// 		ft_dprintf(2, "access yes\n");
	// 	else
	// 		ft_dprintf(2, "access no\n");
	// }
	// else
