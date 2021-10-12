/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:54:01 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 20:17:57 by majermou         ###   ########.fr       */
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

    ASpell* clone() const;
};

#endif  // POLYMORPH_HPP
