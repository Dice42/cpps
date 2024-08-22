/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample5.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/19 13:59:52 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE5_CLASS_HPP
# define SAMPLE5_CLASS_HPP


class Sample5
{
	public:
		Sample5(int v);
		~Sample5(void);

		//getter and compare 
		int	getfoo(void) const;
		int compare(Sample5 *other) const;


	private:
		int		_foo;
};

#endif