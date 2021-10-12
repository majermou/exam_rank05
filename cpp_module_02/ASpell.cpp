/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:21:52 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 18:52:42 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string _name, std::string _effects): name(_name), effects(_effects) {
    
}

ASpell::ASpell(const ASpell& c): name(c.name), effects(c.effects) {
    
}

ASpell::~ASpell() {
    
}

ASpell& ASpell::operator=(const ASpell& rOperand) {
    if (this != &rOperand) {
        name = rOperand.name;
        effects = rOperand.effects;
    }
    return *this;
}

std::string ASpell::getName() const {
    return name;
}

std::string ASpell::getEffects() const {
    return effects;
}

void    ASpell::launch(const ATarget& target) {
    target.getHitBySpell(*this);
}
