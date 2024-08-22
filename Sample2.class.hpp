/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:45:22 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/17 21:42:57 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_HPP
#define SAMPLE2_CLASS_HPP
# include <iostream>
class Sample2
 {
	public:

		float const pi;
		int			foo;

		Sample2(float const f);
		~Sample2(void);

		void	bar(void) const;
 };

#endif