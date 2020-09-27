/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:04:44 by mki               #+#    #+#             */
/*   Updated: 2020/08/09 18:28:59 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		checkcol(int arr[][4], int col, int n)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (arr[i++][col] == n)
			return (0);
	}
	return (1);
}
