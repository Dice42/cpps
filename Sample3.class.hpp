/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample3.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/18 15:56:26 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE3_CLASS_HPP
# define SAMPLE3_CLASS_HPP

class Sample3 
{
	public:

		int		publicFoo;

		Sample3(void);
		~Sample3(void);

		void 	publicBar(void) const;

	private:
	
		int		_privateFoo;

		void 	_privateBar(void) const;
};

#endif