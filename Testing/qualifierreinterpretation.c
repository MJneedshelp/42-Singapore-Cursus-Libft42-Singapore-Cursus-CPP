/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qualifierreinterpretation.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:14:49 by mintan            #+#    #+#             */
/*   Updated: 2025/07/15 09:20:04 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int			a = 42;

	int	const	*b = &a;				//implicit type qualifier cast: promotion
	int	const	*c = (int const *)&a;	//explicit type qualifier cast: promotion

	int	const	*d = (int const *)&a;	//explicit type qualifier cast: promotion -> ok
	// int			*e = &d;				//implicit type qualifier cast: demotion -> nok
	int			*e = (int *)&d;			//explicit type qualifier cast: demotion -> ok




	return (0);

}
