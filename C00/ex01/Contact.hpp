/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:45:11 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/24 17:05:18 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>


class Contact
{
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_secret;
	
	public:
		Contact(void);
		~Contact(void);
		Contact& operator=(const Contact& rhs);
		
		/* getters */
		std::string		get_first_name(void) const;
		std::string		get_last_name(void) const;
		std::string		get_nickname(void) const;
		std::string		get_phone_num(void) const;
		std::string		get_secret(void) const;
		
		/* setters */
		void			set_first_name(std::string str);
		void			set_last_name(std::string str);
		void			set_nickname(std::string str);
		void			set_phone_num(std::string str);
		void			set_secret(std::string str);
};

#endif