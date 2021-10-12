/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majermou <majermou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:47:58 by majermou          #+#    #+#             */
/*   Updated: 2021/10/12 20:16:43 by majermou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
#define  FIREBALL_HPP

#include "ASpell.hpp"

class Fireball: public ASpell
{
private:

public:
    Fireball();
    ~Fireball();

    ASpell* clone() const;
};

#endif // FIREBALL_HPP
