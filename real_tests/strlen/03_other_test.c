/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_other_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:41:10 by angagnie          #+#    #+#             */
/*   Updated: 2018/12/02 20:41:10 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stddef.h>

int		other_test(void)
{
	if (strlen("\	Hello World") == ft_strlen("\	Hello World"))
		return (0);
	else
		return (-1);
}
