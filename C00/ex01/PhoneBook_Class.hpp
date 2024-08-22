/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:47:39 by mohammoh          #+#    #+#             */
/*   Updated: 2024/08/22 21:35:51 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact_Class.hpp"
/*
	Phonebook class:
	- has an array of contancts 
	- it can store a maximum of 8 contacts. 
	- if the user tries to add a 9th contact replace the oldest one by the new one 
	- no dynamic allocation
*/

class PhoneBook
{
	private:
		Contact		_contact[8];
		int			_index;


	public:
		PhoneBook(void);
		~PhoneBook(void);
	

	/* ADD function - save a new contact 
		If the user enters this command, they are prompted to input the information
		of the new contact one field at a time. Once all the fields have been completed,
		add the contact to the phonebook.
		◦The contact fields are: first name, last name, nickname, phone number, and
		darkest secret. A saved contact can’t have empty fields.
	*/

	void	add_contact(Contact cont);
	/* add a contact will ask the user to input the 
		the first name 
		and ill save the input into the firstname variable 
		in the first instance of class contact 
	*/
	//Search Function
/*
		Display the saved contacts as a list of 4 columns: index, first name, last
		name and nickname.
		◦Each column must be 10 characters wide. A pipe character (’|’) separates
		them. The text must be right-aligned. If the text is longer than the column,
		it must be truncated and the last displayable character must be replaced by a
		dot (’.’).
		◦Then, prompt the user again for the index of the entry to display. If the index
		is out of range or wrong, define a relevant behavior. Otherwise, display the
		contact information, one field per line


		| INDEX  (print the first 10 char only) | first_name | last_name | nick_name |

		so will str string resize it to 10 
*/


/* i should have a function that is called saved contacts
	itll be very usable in the main and in the class */
	
	std::string	resize_content(std::string str);
	void		search_contact(std::string user_index);
	
};

#endif