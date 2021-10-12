/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:36:35 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 14:51:18 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string _attribute): attribute(_attribute) {
        
}

ATarget::ATarget(const ATarget& c): attribute(c.attribute) {
    
}

ATarget::~ATarget() {

}

ATarget&    ATarget::operator=(const ATarget& rOperand) {
    if (this != &rOperand) {
        attribute = rOperand.attribute;
    }
    return *this;
}

const std::string&   ATarget::getType() const {
    return attribute;
}

void    ATarget::getHitBySpell(const ASpell& spell) const {
    std::cout << attribute << " has been " << spell.getEffects() << std::endl;
}
