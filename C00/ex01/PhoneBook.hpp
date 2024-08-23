/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:47:39 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/23 23:17:43 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>

class PhoneBook
{
	private:
		Contact		_contact[8];
		int			_index;

	public:
		PhoneBook(void);
		~PhoneBook(void);
	
		void			add_contact(Contact cont);
		void			check_contact_info(std::string line);
		bool			check_first_name(std::string line, Contact& temp);
		bool			check_last_name(std::string line, Contact& temp);
		bool			check_nick_name(std::string line, Contact& temp);
		bool			check_phone_num(std::string line, Contact& temp);
		bool			check_secret(std::string line, Contact& temp);
		
		std::string		resize_content(std::string const str);
		void			list_table(void);
		void			search_contact(std::string user_index);
		void			ft_start(void);
};

#endif