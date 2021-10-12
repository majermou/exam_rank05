/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:40:36 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 23:25:20 by majermou         ###   ########.fr       */
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
    for (std::vector<ASpell*>::iterator it = spellBook.begin(); it < spellBook.end(); ++it) {
        if ((*it)->getName() == spell->getName()) {
            return;
        }
    }
    spellBook.push_back(spell);
}

void   SpellBook::forgetSpell(std::string const & spellName) {
    for (std::vector<ASpell*>::iterator it = spellBook.begin(); it < spellBook.end(); ++it) {
        if ((*it)->getName() == spellName) {
            spellBook.erase(it);
            return;
        }
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName) const {
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
