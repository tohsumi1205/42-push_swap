/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:02:43 by tohsumi           #+#    #+#             */
/*   Updated: 2022/09/29 12:47:15 by tohsumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sort_stacks(t_stacks *s)
{
	if (s->stacksize == 2)
	{
		stacks_sa(s);
		if (*(int *)s->stack_a->dummy->next->data == s->num[1])
			stacks_sa(s);
	}
	else if (s->stacksize == 3)
		sort_three(s);
	else if (s->stacksize == 4)
		sort_four(s);
	else if (s->stacksize == 5)
		sort_five(s);
	else
	{
		a_to_b(s);
		b_to_a(s);
	}
}
