/*
** decode.h for decode in /home/bondot_e/rendu/projets_perso/decode_toolkit
**
** Made by etienne bondot
** Login   <bondot_e@epitech.net>
**
** Started on  Wed Jun  5 11:04:42 2013 etienne bondot
** Last update Sun Jun 30 12:13:02 2013 bondot_e
*/

#define	_POSIX_C_SOURCE	200809L

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef _DECODE_H_
# define _DECODE_H_

# include "codes.h"

# define ENCODE	0
# define DECODE	1

typedef struct s_option	t_option;
typedef struct s_args	t_args;

struct	s_option
{
  char	*param;
  void	(*function)(int opt, char *str);
};

struct	s_args
{
  int	opt;
  char	*str;
};

extern t_option	option[];
extern char	*vigenere_table[];

/*
** main.c
*/

/*
** parse_options.c
*/
void		get_opt_param(char **, t_args *);
void		get_str_param(char **, t_args *);
int		parse_options(int, char **, t_args *);

/*
** error.c
*/
void		print_err(char *);
void		usage();

/*
** utils_1.c
*/
int		is_in_str(char, char *);
void		free_tabchar(char **);

/*
** str_to_wordtab.c
*/
char		**str_to_wordtab(char *);
int		cut_words(char *);
void		print_wordtab(char **);

#endif /* !_DECODE_H_ */
