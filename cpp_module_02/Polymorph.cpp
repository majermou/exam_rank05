/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:55:41 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 16:57:56 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter") {

}

Polymorph::~Polymorph() {

}

ASpell* Polymorph::clone() {
    return new Polymorph;
}
