/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:45:22 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/17 21:28:19 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
#define SAMPLE_CLASS_HPP

class Sample
 {
	public:

		char		a1;
		int			a2;
		float		a3;

		int		foo;

		Sample(char p1, int p2, float p3);
		Sample(void);
		~Sample(void);

		void	bar(void);
 };
 

#endif