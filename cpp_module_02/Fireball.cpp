/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:51:58 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 16:53:43 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp") {
    
}

Fireball::~Fireball() {
    
}

ASpell* Fireball::clone() {
    return new Fireball;
}
