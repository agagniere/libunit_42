/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:14:19 by angagnie          #+#    #+#             */
/*   Updated: 2018/12/02 19:10:27 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include <stdlib.h>

int		ko_test(void)
{
	if (wrong_atoi("\t-2147483648") == atoi("\t-2147483648"))
		return (0);
	else
		return (-1);
}
