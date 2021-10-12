/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:51:58 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 20:17:16 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp") {
   
}

Fireball::~Fireball() {
    
}

ASpell* Fireball::clone() const {
    return new Fireball;
}
