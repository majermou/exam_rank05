/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:26:04 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 23:18:26 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
   std::string name;
   std::string title;
   Warlock(const Warlock& c);
   Warlock& operator=(const Warlock& rOperand);
   std::vector<ASpell*> spells;
public:
   Warlock(std::string _name, std::string _title);
   ~Warlock();
   
   const std::string&	getName() const;
   const std::string&	getTitle() const;
   void  setTitle(const std::string& _title);
   void  introduce() const;
   void  learnSpell(ASpell* spell);
   void  forgetSpell(std::string spellName);
   void  launchSpell(std::string spellName, ATarget& target);
};

#endif // WARLOCK_HPP
