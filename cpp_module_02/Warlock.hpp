/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:26:04 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 18:52:02 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <vector>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
   std::string name;
   std::string title;
   SpellBook   spellBook;
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
