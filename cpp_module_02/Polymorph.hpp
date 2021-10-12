/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:54:01 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 16:58:04 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph: public ASpell
{
public:
    Polymorph();
    ~Polymorph();

    ASpell* clone();
};

#endif  // POLYMORPH_HPP
