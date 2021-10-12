/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:40:36 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 19:24:52 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {
}

SpellBook::SpellBook(const SpellBook& c): spellBook(c.spellBook) {

}

SpellBook&  SpellBook::operator=(const SpellBook& rOperand) {
    if (this != &rOperand) {
        spellBook = rOperand.spellBook;
    }
    return *this;
}

SpellBook::~SpellBook() {

}

void   SpellBook::learnSpell(ASpell* spell) {
    spellBook.push_back(spell);
}

void   SpellBook::forgetSpell(std::string const & spellName) {
    for (std::vector<ASpell*>::iterator it = spellBook.begin(); it < spellBook.end(); ++it) {
        if ((*it)->getName() == spellName) {
            spellBook.erase(it);
        }
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName) {
    if (spellName == "Fireball") {
        Fireball    fireball;
        return fireball.clone();
    } else if (spellName == "Polymorph") {
        Polymorph   polymorph;
        return polymorph.clone();
    } else if (spellName == "Fwoosh") {
        Fwoosh  fwoosh;
        return fwoosh.clone();
    }
    return NULL;
}
