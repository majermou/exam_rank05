/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:41:21 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 23:30:10 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string _name, const std::string _title): name(_name), title(_title) {
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& c): name(c.name), title(c.title) {

}

Warlock&    Warlock::operator=(const Warlock& rOperand) {
    if (this != &rOperand) {
        name = rOperand.name;
        title = rOperand.title;
    }
    return *this;
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!" << std::endl;
}

const std::string&  Warlock::getName() const {
    return name;
}

const std::string&  Warlock::getTitle() const {
    return title;
}

void    Warlock::setTitle(const std::string& _title) {
    title = _title;
}

void    Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void    Warlock::learnSpell(ASpell* spell) {
    spellBook.learnSpell(spell);
}

void    Warlock::forgetSpell(std::string spellName) {
    spellBook.forgetSpell(spellName);
}

void    Warlock::launchSpell(std::string spellName, ATarget& target) {
    ASpell* createdSpell = spellBook.createSpell(spellName);
    if (createdSpell)
        createdSpell->launch(target);
}
