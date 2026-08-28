/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colauren <colauren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:01:21 by colauren          #+#    #+#             */
/*   Updated: 2026/08/16 19:58:00 by colauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_count_word(int *str)
{
    int i;
    int j;
    
    j = 0;
    i = 0;
    while(str[i])
    {
        if (str[i] == 32)
        j++;
    i++;
    }
    return(j);
    
}

char *ft_strdup(char *src)
{
    char *dest;
    int i;
    int j;
    
    dest = malloc((sizeof(char) * (ft_count_word(str) + 1)))
   
    while (str[i])
    {
              dest[i] = src[i]; // la ca n'ecrirais que le premier mot en boucle mais je comprend pas pourquoi
              i++;
    }
    dest[i] = 'NULL';
return(dest);  
}

char **ft_split(char *str)
{
    int i;
    int j;
    char **tab;

    i = 0;
    j = ft_count_word(str); 
    while (i < j)
    {
        tab[i] = strdup(str); // mdr je suis perdu dans les parametres
        i++;
    }
    tab[i] = 'NULL';
return(tab);
}

int main(void)
{
    return(0);
}
