/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample4.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/19 14:04:02 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE4_CLASS_HPP
# define SAMPLE4_CLASS_HPP

class Sample4 
{
	public:
		Sample4(void);
		~Sample4(void);

		/*setters and getters*/
		int		getfoo(void) const;
		void	setfoo( int v);

	private:
		int		_foo;
};

#endif