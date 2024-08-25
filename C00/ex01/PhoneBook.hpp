/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:47:39 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/25 18:14:30 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>
# include <cstdlib>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define LCYAN	"\033[96m"

class PhoneBook
{
	private:
		Contact		_contact[8];
		int			_index;

		void			_add_contact(Contact cont);
		void			_check_contact_info(std::string line);
		bool			_check_first_name(std::string line, Contact& temp);
		bool			_check_last_name(std::string line, Contact& temp);
		bool			_check_nick_name(std::string line, Contact& temp);
		bool			_check_phone_num(std::string line, Contact& temp);
		bool			_check_secret(std::string line, Contact& temp);
		
		std::string		_resize_content(std::string const str);
		void			_list_table(void);
		void			_search_contact(std::string user_index);

	public:
		PhoneBook(void);
		~PhoneBook(void);
	
		void			ft_start(void);
};

#endif
