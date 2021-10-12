/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:01:34 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 19:28:45 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {

}

TargetGenerator::TargetGenerator(const TargetGenerator& c): targets(c.targets) {

}

TargetGenerator&    TargetGenerator::operator=(const TargetGenerator& rOperand) {
    if (this != &rOperand) {
        targets = rOperand.targets;
    }
    return *this;
}

TargetGenerator::~TargetGenerator() {

}

void        TargetGenerator::learnTargetType(ATarget* target) {
    targets.push_back(target);
}

void        TargetGenerator::forgetTargetType(std::string const& targetType) {
    for (std::vector<ATarget*>::iterator it = targets.begin(); it < targets.end(); ++it) {
        if ((*it)->getType() == targetType) {
            targets.erase(it);
        }
    } 
}

ATarget*    TargetGenerator::createTarget(std::string const& type) {
    if (type == "Inconspicuous Red-brick Wall") {
        BrickWall   brickWall;
        return brickWall.clone();
    } else if (type == "Target Practice Dummy") {
        Dummy   dummy;
        return dummy.clone();
    }
    return NULL;
}
