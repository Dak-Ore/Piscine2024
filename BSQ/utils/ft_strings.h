/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-gaz <soel-gaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:54:47 by soel-gaz          #+#    #+#             */
/*   Updated: 2024/08/04 16:07:43 by soel-gaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H
# include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strncpy(char *dest, char *src, int n);



#endif
