/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:26:04 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 15:08:21 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock {
   std::string name;
   std::string title;
   Warlock(const Warlock& c);
   Warlock& operator=(const Warlock& rOperand);
public:
   Warlock(std::string _name, std::string _title);
   ~Warlock();
   
   const std::string&	getName() const;
   const std::string&	getTitle() const;
   void  setTitle(const std::string& _title);
   void introduce() const;
};

#endif // WARLOCK_HPP
