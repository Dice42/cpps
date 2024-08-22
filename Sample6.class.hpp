/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample6.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:34:20 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/19 15:21:15 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE6_CLASS_HPP
# define SAMPLE6_CLASS_HPP


class Sample6
{
	public:
		Sample6(void);
		~Sample6(void);

 	/* introducing non member function 
		non member function
		when the function does not have anything to do with the other class functions, 
		but you want it to be part of the class
	*/
	static int	get_num_of_instances(void);
	
	private:
		static int		_foo;
};

#endif