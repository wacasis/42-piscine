/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:03:59 by colauren          #+#    #+#             */
/*   Updated: 2026/08/20 17:37:45 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_is_sep(char c, char *sep )
{
    int i;
    
    i = 0;
    while (sep[i])
    {
        if (sep[i] == c)
            return(1);
        return(0);
    }
}

int ft_count_word(char *sep, char *str)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while(str[i])
    {
        while(ft_is_sep(str[i], i) && str[i])
        {    i++;
            if(!ft_is_sep(str[i],i) && str[i])
            count++;
        }
        while(!ft_is_sep(str[i], i) && str[i])
            i++;
        
    }
    return(count);
}

int strlen(char *str, char sep) 
{
    int size;
    int i;
    
    size = 0;
    while(str[i] && !ft_is_sep(str[i],sep)) 
    {
        size++;
        i++;
    }
    return(size)
}

char    strdup(char *str, int *i, int sep)
{
    char *res;
    int j;
    
    j = 0; 
    while(str[(*i)] && ft_is_sep(str[(*i)], sep))
        (*i)++;
    res = malloc(sizeof(*char) * strlen(str, sep, (*i)) + 1)
        if (!res) // est ce que je peux ecrire comme ca 
            return(NULL);
    while(str[(*i)] && !ft_is_sep(str[(*i)], sep))
    {
        res[j] = str[(*i)];
        (*i)++;
        j++;
    }
    res[j] = '\0'; // faute = res au lieu de res[j]
    return(res);
}

char **ft_split(char *str, char *charset,)
{
    int j;
    int i;
    char **tab;
    int count;

    j = 0; \\ jai pas mis i a zero cest grave 
    count = ft_count_word(str[(*i)], charset);  // j'ai mis str[(*i)] au lieu de str, c'est grave ;0
    
      *tab = malloc(sizeof(*char) * (count + 1)) // faute malloc a l'exterieur du while
       (!tab) // est ce que je peux ecrire comme ca MANQUE UN IF
        return(NULL);
      
    while(str[(i*)] && !ft_is_sep(str[(*i)]))
    {
      
        tab[j] = strdup(str, &i, charset) // faute *tab au lieu de tab[j]
        j++;
    }
    tab[j] = NULL; // faute *tab au lieu de tab[j]
    return(tab);
    
}

int     main (int ac, char **av)
{
        char **tab;
        int i = 0;
        tab = ft_split(av[1], av[2]);
        (void)ac;
        while (tab[i] != NULL)
        {
            printf("mot%d = %s\n", i, tab[i]);
            i++;
        }
}


